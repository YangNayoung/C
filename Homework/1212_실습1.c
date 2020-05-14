#include <stdio.h>

int max(int p, int q) 
{
	int m;

	if (p < q)
		m = p;
	else
		m = q;

	return m;
}

void main()
{
	int a = 5, b = 3;

	printf("%d\n", max(a, b));
}