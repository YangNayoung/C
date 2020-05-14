#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
	int score[3];
	int grade;
	int max;
};

int main()
{
	int su;
	printf("학생수 입력 : ");
	scanf("%d", &su);
	struct student *st =(struct student *) malloc(sizeof(struct student)*su);
	for (int i = 0; i < su; i++) {
		for (int j = 0; j < 3; j++) {
			printf("점수 %d입력 : ", j + 1);
			scanf("%d", &(st[i].score[j]));
			if (st[i].score[j] < 0 || st[i].score[j]>100) {
				printf("다시 입력하세요. ===> ");
				j--;
				continue;
			}
		}
		st[i].max = 0;
		for (int j = 0; j + 1 < su; j++) {
			if ((st[i].max) < (st[i].score[j])) {
				st[i].max = st[i].score[j];
			}
		}
		switch (st[i].max / 10) {
		case 10: case 9: st[i].grade = 5; break;
		case 8: st[i].grade = 4; break;
		case 7: st[i].grade = 3; break;
		case 6: st[i].grade = 2; break;
		default: st[i].grade = 1; break;
		}
		printf("\n");
	}

	for (int i = 0; i < su; i++) {
		printf("%3d", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("%7d", st[i].score[j]);
		}
		printf("%6d\n", st[i].grade);
	}
}