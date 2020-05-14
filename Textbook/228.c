#include <stdio.h>

struct student {
	int number;
	char name[10];
	int kor;
	int eng;
	int mat;
	int sum;
	float avg;
};

int main()
{
	int i;
	struct student list[3] = {
		{20101,"홍길동",10,20,30 },
		{20102,"갑순이",40,50,60},
		{20103,"갑돌이",70,80,90} };
	struct student *p;
	p = list;

	printf("=============================================================\n");
	printf("\n    성  적  표 \n");
	printf(" 학번     이름   국어 영어 수학  총점     평균\n");

	for (i = 0; i < 3; i++, p++) {
		p->sum = p->kor + p->eng + p->mat;
		p->avg = (float)p->sum / 3;
		printf("%6d %8s %4d %4d %4d %6d  %f\n", p->number, p->name, p->kor, p->eng, p->mat, p->sum, p->avg);
	}
	printf("=============================================================\n");
}