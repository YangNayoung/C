#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[] = "acxdefghij";
	char *p = NULL;
	int i;

	p = str + 5;
	for (i = 0; i < 5; i++, p++)
		*p = '1' + i;

	printf("str = %s\n", str);

	return 0;
}