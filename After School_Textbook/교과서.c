// 279p. 1번
/*#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int a, b, min, max;

	printf("임의의 정수 입력1 : ");
	scanf("%d", &a);
	printf("임의의 정수 입력2 : ");
	scanf("%d", &b);

	(a > b) ? (max = a, min = b) : (max = b, min = a);
	printf("몫은 %d이고 나머지는 %d입니다.\n", max / min, max % min);

	return 0;
}*/
	
//3번

#include <stdio.h>
#pragma warning(disable:4996)

 int main(void) 
{
	double x;

	printf("길이를센티미터로입력하세요.(소수) >> ");
	scanf("%lf", &x);
	printf("%lf 센티미터는%6.3lf 피트입니다.\n", x, x / 30.48);

	return 0;
}





 