// 0�� �Էµ� ������ ������ �� n���� �Է¹޾� 10~20 ������ ������ �հ� ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("������ �� �Է�(����� 0 �Է�) >> ");
	int n, sum=0;
	do {
		scanf("%d", &n);
		if (n <= 20 && n >= 10)
			sum += n;
	} while (!(n == 0));
	printf("10���� 20 ���� ���� �� : %d\n", sum);
} 