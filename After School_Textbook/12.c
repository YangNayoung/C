#include <stdio.h>
#pragma warning(disable:4996)

/*int main(void)
{
	int num;
	float f;
	f = 10 / 3;
	printf("f = %f\n", f);
	f = (float)10 / 3;
    printf("f = %f\n", f);
	f = (float)10 / (float)3;
	printf("f = %f\n", f);
	num = (int)(12.5 + 10.7);
	printf("num = %d\n", num);
	num = (int)12.5 + (int)10.7;
	printf("num = %d\n", num);

	return 0;
}*/

int main(void)
{
	int a = 100, b = 50, c = 0;

	c = (3 + a, b * 2);
	printf("%d %d %d\n", a, b, c);

	return 0;
}