// 6번
/*#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int x;

	printf(" 정수 천만 이하의 하나의 수를 입력 >> ");
	scanf("%d", &x);
    printf("입력한수%d는     ",x);
    printf("%d만          ", x /10000);
    printf("%d천          ", (x /10000) / 1000);
    printf("%d백          ", (x /1000) / 100);
    printf("%d십          ", (x /100) / 10);
    printf("%d입니다.\n   ", x % 10);
    system("PAUSE");

	return 0;
}*/

//10번

#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	double rate = 0.045;
	double origin = 1000000, total;
	int period;

	printf("예치기간입력(년):");
	scanf("%d", &period);
	total = origin * (1 + rate * period);
	printf("종금액: %.2f\n", total);

	return 0;
}

