#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double number;
	long inumber;
	printf("�Ǽ��� �Է��ϰ� Enter> ");
	scanf("%lf", &number);
	inumber = (long)number;
	printf("�Էµ� �� : %lf\n", number);
	printf("�����κ� : %ld\n", inumber);
	number = number - inumber;
	printf("�Ǽ��κ� : %lf\n", number);

	return 0;
}