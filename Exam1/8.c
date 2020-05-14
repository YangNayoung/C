// 0이 입력될 때까지 임의의 수 n개를 입력받아 10~20 사이의 수들의 합계 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("임의의 수 입력(종료시 0 입력) >> ");
	int n, sum=0;
	do {
		scanf("%d", &n);
		if (n <= 20 && n >= 10)
			sum += n;
	} while (!(n == 0));
	printf("10부터 20 사이 수의 합 : %d\n", sum);
} 