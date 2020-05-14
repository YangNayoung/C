/*#include <stdio.h>

int main(void)
{
        int point1 = 95, point2 = 84;
        int total = point1 + point2;

        printf("total = %d\n", total);
        printf("mean1 = %d\n", total / 2);
        printf("mean2 = %f\n", total / 2.0);

        return 0;
}*/

#include <stdio.h>

int main(void)
{
	double UNIT = 3.305785;
	printf("%2d(평)은%10.3f(제곱미터)\n", 18, 18 * UNIT);
	printf("%2d(평)은%10.3f(제곱미터)\n", 25, 25 * UNIT);
	printf("%2d(평)은%10.3f(제곱미터)\n", 32, 32 * UNIT);
	printf("%2d(평)은%10.3f(제곱미터)\n", 44, 44 * UNIT);
	printf("%2d(평)은%10.3f(제곱미터)\n", 54, 54 * UNIT);

	return 0;
}
