#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>

int main(void)
{
	time_t start, end;
	long i = 0;
	double pst;
	start = clock();
	while (i < 30000000)
		i++;
	end = clock();
	pst = (double)(end - start) / CLK_TCK;
	printf("time: %f\n", pst);

	return 0;
}