// 배열 사용 jum[3][4] kor[i][0] eng[i][1]

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PEOPLE 3

int main()
{
	char id[PEOPLE][5], name[PEOPLE][7];
	char Lv[PEOPLE];
	int score[PEOPLE][4], total[PEOPLE] = { 0 };
	float avg[PEOPLE] = { 0 };
		
		// 입력
		for (int i = 0; i < PEOPLE; i++) {
			printf("======================================\n");
			printf("학번을 입력하시오(숫자로): ");
			scanf("%s", id[i]);

			printf("이름을 입력하시오: ");
			scanf("%s", name[i]);

			for (int j = 0; j < 4; j++) {
				while (1) {
					printf("점수를 입력하시오: ");
					scanf("%d", &score[i][j]);
					if (!(score[i][j] < 0 || score[i][j] > 100)) break;
					printf("점수 오류\n");
				}
			}// 입력 끝
		
			// 총점, 평균, 등급
			total[i] = score[i][0] + score[i][1] + score[i][2] + score[i][3];
			avg[i] = (float)(total[i] / 4.0);
			printf("--------------------------------------\n");

			float avg1 = avg[i] / 10;
			switch ((int)avg1) {
			case 10:case 9: Lv[i] = ('A'); break;
			case 8:Lv[i] = ('B'); break;
			case 7:Lv[i] = ('C'); break;
			case 6:Lv[i] = ('D'); break;
			default: Lv[i] = ('F'); break;
			}
		}// 총점, 평균, 등급 끝

		// 출력
		printf("\n");
		for (int i = 0; i < PEOPLE; i++) {
			printf("%-5s %-7s %4d %4d %4d %4d %4d %7.2f %c\n", id[i], name[i], score[i][0], score[i][1], score[i][2], score[i][3], total[i], avg[i], Lv[i]);
		}
	}// 출력 끝