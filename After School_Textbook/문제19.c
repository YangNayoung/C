#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, num;
	double *p = NULL;
	double sum = 0;

	printf("�迭�� ũ�⸦ �����ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	p = (double*)malloc(num * sizeof(double));

	for (i = 0; i < num; i++, p++)
	{
		scanf("%lf", p);
		sum += *p;
	}
	p = NULL;
	printf("�迭�� �հ� : %.2lf\n", sum);
	free(p);

	return 0;
}