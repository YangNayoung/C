#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	float a, b;

	scanf("%f, %f", &a, &b);
	printf("�簢��: %12.3f, �ﰢ��: %-12.3f", a*b, (a*b) / 2);

	return 0;
}