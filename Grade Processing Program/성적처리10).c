// 파일입출력 형식
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
//#define PEOPLE 3
#define SUB 4

char subname[SUB][6] = { { "국어" },{ "영어" },{ "수학" },{ "C언어" } };

void line(int n) {
	for (int i = 1; i < n; i++) {
		printf("=");
	}
	printf("\n");
}

struct student {
	char id[5], name[7];
	char Lv;
	int rank;
	int score[SUB + 1]; // total[PEOPLE] = { 0 }; 총점 때문에 +1
	float avg;
};

void input(struct student *a) {
	printf("\n");
	printf("학번을 입력하시오(숫자로): ");
	scanf("%s", a->id);

	printf("이름을 입력하시오: ");
	scanf("%s", a->name);

	for (int j = 0; j < SUB; j++) {
		while (1) {
			printf("%s를 입력하시오: ", subname[j]);
			scanf("%d", &a->score[j]);
			if (!(a->score[j] < 0 || a->score[j] > 100)) break;
			printf("점수 오류\n");
		}
		a->score[SUB] = 0; // 학생 총점 초기값
		a->avg = 0; // 평균 초기값
	}
}

void calc(struct student *stu, int PEOPLE) {
	for (int j = 0; j < SUB; j++) {
		(stu->score[SUB]) += (stu->score[j]); // 학생 총점
		((stu + PEOPLE)->score[j]) += (stu->score[j]); // 과목별 총점
	}
	stu->avg = (float)(stu->score[SUB] / SUB); // 학생 평균 
											   // 총점, 평균 끝

											   // 등급
	float avg1 = stu->avg / 10;
	switch ((int)avg1) {
	case 10:case 9: stu->Lv = ('A'); break;
	case 8: stu->Lv = ('B'); break;
	case 7: stu->Lv = ('C'); break;
	case 6: stu->Lv = ('D'); break;
	default: stu->Lv = ('F'); break;
	} // 등급 끝
}

void print(struct student a) { // 구조체 출력 함수 
	printf("%-5s %-7s", a.id, a.name); // 학번, 이름
	for (int j = 0; j < SUB; j++) {
		printf("%8d", a.score[j]); // 점수
	}
	printf("%8d %8.2f %5c %5d\n", a.score[SUB], a.avg, a.Lv, a.rank); //총점, 평균, 등급, 석차
}

int main() // main 시작
{
	FILE *fp;
	fp = fopen("성적처리.txt", "w+"); // 파일 열기

	int PEOPLE;
	printf("몇 명을 입력하시겠습니까? ");
	scanf("%d", &PEOPLE);

	int total[5] = { 0 }; // 과목별 총점 배열
	float avg[5] = { 0 }; // 반별 평균
	char subname[SUB][6] = { { "국어" },{ "영어" },{ "수학" },{ "C언어" } };

	struct student *stu = (struct student *)malloc(sizeof(struct student)*PEOPLE);


	// 입력,총점,평균
	for (int i = 0; i < PEOPLE; i++) {
		input(stu + i); // 입력
		calc(stu + i, PEOPLE);  // 총점,평균
	} // 입력, 총점, 평균 끝

	  // 과목별의 총점, 총점의 총점 
	for (int i = 0; i < SUB; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			total[i] += (*(stu + j)).score[i]; // 과목별의 총점
		}
		total[4] += total[i]; // 과목별의 총점의 총점
	} // 과목별의 총점, 과목별의 총점의 총점 끝

	  // 과목별의 평균, 과목별의 총점의 평균
	for (int i = 0; i < SUB + 1; i++) {
		avg[i] = (float)total[i] / PEOPLE;
	} // 과목별의 평균, 과목별의 총점의 평균 끝 

	  // 석차
	for (int i = 0; i < PEOPLE; i++) {
		(*(stu + i)).rank = 1;
	}

	for (int i = 0; i < PEOPLE - 1; i++) {
		for (int j = i + 1; j < PEOPLE; j++) {
			if ((*(stu + i)).score[SUB] < (*(stu + j)).score[SUB])
				(*(stu + i)).rank++;
			else if ((*(stu + i)).score[SUB] > (*(stu + j)).score[SUB])
				(*(stu + j)).rank++;
		}
	}// 석차 끝

	 // 출력
	line(75);
	printf("학번  이름       국어    영어    수학       C    총점     평균  등급  석차\n");
	for (int i = 0; i < PEOPLE; i++) {
		print(stu[i]); // 구조체 출력 함수
	}
	line(75);

	printf("과목별 총점  ");
	for (int i = 0; i < SUB + 1; i++) {
		printf("%8d", total[i]);
	} // 과목별 총점, 과목별의 총점의 총점

	printf("\n");

	printf("과목별 평균   ");
	for (int i = 0; i < SUB + 1; i++) {
		printf("%7.2f ", avg[i]);
	} // 과목별 평균, 과목별의 총점의 평균

	printf("\n"); // 출력 끝

	fprintf(fp, "\n"); // 파일 찍기
	line(fp);

	fclose(fp); // 파일 닫기
} // main 끝