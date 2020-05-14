#include <stdio.h>

void main()
{
	int a[2][3] = { {11,12,13},
					{21,22,23} };
	int i, *p;
	p = &a[0][0];
	for (i = 0; i < 6; i++)
		printf("a[][]=%d\n", *(p + i));
}