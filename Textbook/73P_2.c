#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	char Name[7];
	int Sub_1, Sub_2, Sub_3, sum;
	float Aver;

	printf("이름:");

	scanf("%s", Name);

	printf("과목A:");

	scanf("%d", &Sub_1);

	printf("과목B:");

	scanf("%d", &Sub_2);

	printf("과목C:");

	scanf("%d", &Sub_3);

	sum = Sub_1 + Sub_2 + Sub_3;

	Aver = (float)sum / 3;

	printf("%s\t", Name);

	printf("%d\t", Sub_1);

	printf("%d\t", Sub_2);

	printf("%d\t", Sub_3);

	printf("%d\t", sum);

	printf("%.2f\t", Aver);

	return 0;
}