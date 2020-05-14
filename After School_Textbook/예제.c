#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	long number, count, notation;
	printf("10진 정수를 입력하고 Enter> ");
	scanf("%ld", &number);
	printf("진수를 입력하고 Enter> ");
	scanf("%ld", &notation);
	printf("\n10진수 : %ld\n", number);
	count = (long)(log(number) / log10(notation) + 1);
	printf("%2ld진법의 자리수 : %ld\n", notation, count);

	return 0;
}

