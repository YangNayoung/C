#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("�� : %d, ��� : %f", a + b, (a + b) / 2.0);

	return 0;
}