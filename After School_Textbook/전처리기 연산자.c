#define _CRT_SECURE_NO_WARNINGS
#define PRINT1(x) printf("x = %d\n", x)
#define PRINT2(x) printf(#x" = %d\n", x)
#include <stdio.h>

int main()
{
	int n;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	PRINT1(n);
	PRINT2(n);

	return 0;
}