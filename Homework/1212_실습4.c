#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Av(int n);

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d�� ���밪�� %d�̴�.\n", a, Av(a));
}

int Av(int n)
{
	int v = 0;

	if (n < 0)
		v = n * (-1);
	else
		v = n;

	return v;
}
