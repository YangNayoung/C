#include <stdio.h>
#define PI 3.141592
#define SQUARE(x)  ( (x) * (x) )
#define CUBE(x)  ( SQUARE(x) * (x) )
#define MULT(x,y)  ( (x) * (y) )
int main(void)
{
	printf("실수 제곱은 %.2f 입니다.\n", SQUARE(4.25));
	printf("실수 CUBE는 %.2f 입니다.\n", CUBE(4.25));
	printf(" 두 실수 곱은 %.2f입니다", MULT(2.78, 3.62));

	return 0;
}