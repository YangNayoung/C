#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PEOPLE 3
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
}stu[PEOPLE];

int main()
{
	struct student *p = &stu[0]; 

	int total[4] = { 0 }; // 과목별 총점 배열
	float avg[4] = { 0 }; // 반별 평균
	char subname[SUB][6] = { { "국어" },{ "영어" },{ "수학" },{ "C언어" } };

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
		}// 입력 끝
	}
	// 입력 -포인터 활용
	for (int i = 0; i < PEOPLE; i++) {
		printf("\n");
		printf("학번을 입력하시오(숫자로): ");
		scanf("%s", &((*p).id));

		printf("이름을 입력하시오: ");
		scanf("%s", &((*p).name));

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s를 입력하시오: ", subname[j]);
				scanf("%d", &((*p).score[j]));
				if (!((*p).score[j] < 0 || (*p).score[j] > 100)) break;
				printf("점수 오류\n");
			}
		}// 입력 끝
	}
	printf("\n");
	printf("%s\n", (*p).id);
	printf("%s\n", (*(p+1)).id);
}
