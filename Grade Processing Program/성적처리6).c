// 과목별 평균, 사람수 입력 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
//#define PEOPLE 3
#define SUB 4

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

int main() // main 시작
{
	int PEOPLE;
	printf("몇 명을 입력하시겠습니까? ");
	scanf("%d", &PEOPLE);
	
	int total[5] = { 0 }; // 과목별 총점 배열
	float avg[5] = { 0 }; // 반별 평균
	char subname[SUB][6] = { { "국어" },{ "영어" },{ "수학" },{ "C언어" } };

	struct student *stu = (struct student *)malloc(sizeof(struct student)*PEOPLE);

	// 입력
	for (int i = 0; i < PEOPLE; i++) {
		printf("\n");
		printf("학번을 입력하시오(숫자로): ");
		scanf("%s", stu[i].id);

		printf("이름을 입력하시오: ");
		scanf("%s", stu[i].name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s를 입력하시오: ", subname[j]);
				scanf("%d", &stu[i].score[j]);
				if (!(stu[i].score[j] < 0 || stu[i].score[j] > 100)) break;
				printf("점수 오류\n");
			}
			stu[i].score[SUB] = 0; // 학생 총점 초기값
			stu[i].avg = 0; // 평균 초기값

		}// 입력 끝

		 // 총점,평균
		for (int j = 0; j < SUB; j++) {
			stu[i].score[SUB] += stu[i].score[j]; // 학생 총점
			stu[PEOPLE].score[j] += stu[i].score[j]; // 과목별 총점
		}
		stu[i].avg = (float)(stu[i].score[SUB] / SUB); // 학생 평균 
		// 총점, 평균 끝

		// 등급
		float avg1 = stu[i].avg / 10;
		switch ((int)avg1) {
		case 10:case 9: stu[i].Lv = ('A'); break;
		case 8:stu[i].Lv = ('B'); break;
		case 7:stu[i].Lv = ('C'); break;
		case 6:stu[i].Lv = ('D'); break;
		default:stu[i].Lv = ('F'); break;
		}
	}// 등급 끝

	 // 과목별의 총점, 총점의 총점 
	for (int i = 0; i < SUB; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			total[i] += stu[j].score[i]; // 과목별의 총점
		}
		total[4] += total[i]; // 과목별의 총점의 총점
	} // 과목별의 총점, 과목별의 총점의 총점 끝

	 // 과목별의 평균, 과목별의 총점의 평균
	for (int i = 0; i < SUB + 1; i++) {
		avg[i] = (float)total[i] / PEOPLE;
	} // 과목별의 평균, 과목별의 총점의 평균 끝 

	  // 석차
	for (int i = 0; i < PEOPLE; i++) {
		stu[i].rank = 1;
	}

	for (int i = 0; i < PEOPLE - 1; i++) {
		for (int j = i + 1; j < PEOPLE; j++) {
			if (stu[i].score[SUB] < stu[j].score[SUB])
				stu[i].rank++;
			else if (stu[i].score[SUB] > stu[j].score[SUB])
				stu[j].rank++;
		}
	}// 석차 끝

	 // 출력
	line(75);
	printf("학번  이름       국어    영어    수학       C    총점     평균  등급  석차\n");
	for (int i = 0; i < PEOPLE; i++) {
		printf("%-5s %-7s", stu[i].id, stu[i].name); // 학번, 이름
		for (int j = 0; j < SUB; j++) {
			printf("%8d", stu[i].score[j]); // 점수
		}
		printf("%8d %8.2f %5c %5d\n", stu[i].score[SUB], stu[i].avg, stu[i].Lv, stu[i].rank); //총점, 평균, 등급, 석차
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
} // main 끝
