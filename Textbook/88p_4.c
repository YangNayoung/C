#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	/* 할푼리 구하기
	float k = 0.375;

	int a = (k * 10);//3
	int b = (k * 100) - a * 10;//37-30
	int c = (k *1000) - (a * 100 + b * 10); //375-370

	printf("할: %d\n", a);
	printf("푼: %d\n", b);
	printf("리: %d\n", c);
	*/ 

	int c;

	int k= printf("양나영\n");
	printf("%d\n", k); // 글자 수 출력

	int p = scanf("%d %d", &k,&c);
	printf("%d\n", p); // 입력한 데이터 수 출력

	return 0;
}