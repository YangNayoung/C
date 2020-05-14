#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int p(int a, int b)
{
	int m, add=0;
	if (a < b)
		add = b - a;
	else
		add = a - b;

	return add;
}

void main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", p(a, b));
}