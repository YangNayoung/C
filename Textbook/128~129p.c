// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main()
{
	int i = 1;
	while (i > 0)
	{
		printf("양수의 정수를 입력하시오.\n");
		scanf("%d", &i);
	}
	printf("잘못 입력하셨습니다.\n");
	return 0;
}
*/

int main()
{
	int m, n = 8;
	printf("----------------\n");
	while (n <= 9)
	{
		m = 1;
		while (m <= 9)
		{
			printf("%d*%d = %2d\n", n, m, n*m);
			m++;
		}
		printf("-------------------\n");
		n++;
	}
}