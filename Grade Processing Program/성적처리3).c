// 석차 & 총점 없애기 & 과목이름 나타내기

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

int main()
{
	char id[PEOPLE][5], name[PEOPLE][7];
	char Lv[PEOPLE];
	char subname[SUB][6] = { {"국어"},{"영어"},{"수학"},{"C언어"} };
	int rank[PEOPLE];
	int score[PEOPLE][SUB + 1] = { 0 }; // total[PEOPLE] = { 0 };
	float avg[PEOPLE] = { 0 };

	// 입력
	for (int i = 0; i < PEOPLE; i++) {
		printf("\n");
		printf("학번을 입력하시오(숫자로): ");
		scanf("%s", id[i]);

		printf("이름을 입력하시오: ");
		scanf("%s", name[i]);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s를 입력하시오: ",subname[j]);
				scanf("%d", &score[i][j]);
				if (!(score[i][j] < 0 || score[i][j] > 100)) break;
				printf("점수 오류\n");
			}
		}// 입력 끝

		// 총점,평균
		for (int j = 0; j < SUB; j++) {
			score[i][SUB] += score[i][j];
		}
		avg[i] = (float)(score[i][SUB] / SUB); // 총점, 평균 끝

		// 등급

		float avg1 = avg[i] / 10;
		switch ((int)avg1) {
		case 10:case 9: Lv[i] = ('A'); break;
		case 8:Lv[i] = ('B'); break;
		case 7:Lv[i] = ('C'); break;
		case 6:Lv[i] = ('D'); break;
		default: Lv[i] = ('F'); break;
		}
	}// 등급 끝

	// 석차
	for (int i = 0; i < PEOPLE; i++) {
		rank[i] = 1;
	}

	for (int i = 0; i < PEOPLE - 1; i++) {
		for (int j = i + 1; j < PEOPLE; j++) {
			if (score[i][SUB] < score[j][SUB])
				rank[i]++;
			else if (score[i][SUB] > score[j][SUB])
				rank[j]++;
		}
	}// 석차 끝

	// 출력
	line(50);
	printf("학번  이름     국어  영어   수학    C  총점     평균  등급  석차\n");
	for (int i = 0; i < PEOPLE; i++) {
		printf("%-5s %-7s", id[i], name[i]); // 학번, 이름
		for (int j = 0; j < SUB; j++) {
			printf("%6d", score[i][j]); // 점수
		}
		printf("%6d %8.2f %5c %5d\n", score[i][SUB], avg[i], Lv[i], rank[i]); //총점, 평균, 등급, 석차
	}
	line(50);
}// 출력 끝
