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

void Print(struct student *pp) {
	int i;
	printf("=============================================================\n");
	printf("\n    ��  ��  ǥ \n");
	printf(" �й�     �̸�   ���� ���� ����  ����     ���\n");

	for (i = 0; i < 3; i++, pp++) {
		pp->sum = pp->kor + pp->eng + pp->mat;
		pp->avg = (float)pp->sum / 3;
		printf("%6d %8s %4d %4d %4d %6d  %f\n", pp->number, pp->name, pp->kor, pp->eng, pp->mat, pp->sum, pp->avg);
	}
	printf("=============================================================\n");
}

int main()
{
	struct student list[3] = {
	{ 20101,"ȫ�浿",10,20,30 },
	{ 20102,"������",40,50,60 },
	{ 20103,"������",70,80,90 } };
	struct student *p;
	p = list;

	Print(p);

	return 0;
}