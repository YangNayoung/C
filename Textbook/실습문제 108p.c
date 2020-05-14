#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 1번 문제
void main()
{
	int A, B, C;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	// A == 1 ? "합격" : B > 90 ? C > 50 ? "합격" : "불합격" : "불합격";
	(A == 1) || (B > 90 && C > 50) ? printf("합격") : printf("불합격");

}
*/
/* 2번 문제
void main()
{
	int x, y, a, b;
	scanf("%d", x);
	scanf("%d", y);

	a = x / y;
	b = x % y;

	if (x = y * a + b) {
		printf("성립한다.");
	}
	else {
		printf("성립하지 않는다.");
	}
}
*/
/* 3번 문제
void main()
{
	int a = 1, sum = 0;
	while(1) {
		sum = sum + a;
		if (a >= 7)
		{
			break;
		}
		a = a + 2;
	}
	printf("%d\n", sum);
}
*/