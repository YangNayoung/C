#include <stdio.h>

/* 1번 
main() 
{
	int c;
	c = 1 > 2 + (4 - 3) * 2 / 2;
	printf("%d\n", c);
}
*/
/* 2번
main()
{
	int c;
	c = 3 > 2 + (2 - 3) * 2;
	printf("%d\n", c);
}
*/
/* 3번
  main()
{
	int a, b, c, s;
	a = 25;
	b = a / 3;
	c = a % 3;
	s= (b + c) / 5;
	printf("%d\n", s);
}
*/
/* 4번
main()
{
	int a = 10, b;
	b = a << 2;
	a = a >> 1;
	printf("%d\n", a + b);
}
*/
/* 6번
main()
{
	int a = 5, b = 3, c;
	c = a * (a - b) - (a < b) * 2;
	printf("%d\n", c);
}
*/
/* 7번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	const c = 2;
	float func(float x) {
		return x / c;
	}
	void main() {
		float a;
		int b;
		scanf("%f", &a);
		b = func(a);
		printf("%f %d", a, b);
	}
*/
/* 8번
main()
{
	int a = 2, b = 3, c, d;
	c = a || b;
	d = a | b;
	printf("%d\n", c + d);
}
*/