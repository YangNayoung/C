// 임의의 정수 n을 입력받아 1+(1/2)+(1/3)+ ... +(1/n)을 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	float sum = 1;
	printf("임의의 정수 n을 입력하세요 : ");
	scanf("%d", &n);
	printf("%d", 1);

	for (int i = 2; i <= n; i++) {
		sum+= (float)1 / i;

		printf(" + 1/%d", i);
	}
	printf(" = %.3f\n", sum);
}