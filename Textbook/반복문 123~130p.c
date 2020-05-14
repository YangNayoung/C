#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* i를 증가하여 계속 더할 때 100이 넘는 수
int main()
{
	int i = 1, sum = 0;

	while (sum <= 100) {
		sum += i;
		i++;
	}
	printf("%d %d", sum, i);
	return 0;
}
*/
/* 단순 for문
int main()
{
	int a, sum = 0;
	for (a = 1; a <= 5; a++) {
		sum = sum + a;
		printf("%5d\n", sum);
	}
	printf("%3d\n", a);

	return 0;
}
*/
/* 구구단 원하는 단 입력 후 출력
int main()
{
	int i, j;
	scanf("%d", &i);
	for (j = 1; j <= 9; j++)
		printf("%d * %d = %d\n", i, j, i*j);

	return 0;
}
*/
/* 2~9단까지
int main()
{
	int i, j;
	
	for (i=2;i<=9;i++) 
	{ 
	    printf("-----------------\n");
		for (j = 1; j <= 9; j++)
			printf("%d * %d = %d\n", i, j, i*j);
	}

	return 0;
}
*/
/* 2개의 단을 입력하여 사이의 단 출력
int main()
{
	int a, b, i, j;
	printf("2개의 단을 입력해주세요: ");
	scanf("%d %d",&a,&b);
	for (i = a; i <= b; i++) 
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %2d\n", i, j, (i*j));
		}
		printf("-----------------\n");
	}
	return 0;
}
*/
/* 
int main()
{
	int i, j, a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	for (i = 1; i <= 9; i++) {
		for (j = a; j <= b; j++) {
			printf("%d * %d = %2d", i, j, (i*j));
		}
		printf("\n");
	}
}
*/