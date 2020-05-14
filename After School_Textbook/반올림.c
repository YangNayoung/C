#include <stdio.h>
#include <math.h>
#define roundoff(x) floor(x+0.5)

int main(void)
{
	double i, dnum;
	printf("x\tcril(x)\tfloor(x) floor(x+0.5)\n");
	for (i = -2; i <= 2; i += 0.4)
		printf("%4.lf\t%4.lf\t%4.lf\t %4.lf\n", i, ceil(i), floor(i), roundoff(i));
	return 0;
}