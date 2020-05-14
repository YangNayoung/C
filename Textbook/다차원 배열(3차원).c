#include <stdio.h>

int main()
{
	int a[2][3][4];
	printf("%d\n", sizeof(a));
	printf("%d\n", &a[2][3][4]);
}