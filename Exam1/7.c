// ������ ���� n�� �Է¹޾� 1+(1/2)+(1/3)+ ... +(1/n)�� ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	float sum = 1;
	printf("������ ���� n�� �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("%d", 1);

	for (int i = 2; i <= n; i++) {
		sum+= (float)1 / i;

		printf(" + 1/%d", i);
	}
	printf(" = %.3f\n", sum);
}