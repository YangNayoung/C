#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	long number, count, notation;
	printf("10�� ������ �Է��ϰ� Enter> ");
	scanf("%ld", &number);
	printf("������ �Է��ϰ� Enter> ");
	scanf("%ld", &notation);
	printf("\n10���� : %ld\n", number);
	count = (long)(log(number) / log10(notation) + 1);
	printf("%2ld������ �ڸ��� : %ld\n", notation, count);

	return 0;
}

