#include <stdio.h>

/* 1�� 
main() 
{
	int c;
	c = 1 > 2 + (4 - 3) * 2 / 2;
	printf("%d\n", c);
}
*/
/* 2��
main()
{
	int c;
	c = 3 > 2 + (2 - 3) * 2;
	printf("%d\n", c);
}
*/
/* 3��
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
/* 4��
main()
{
	int a = 10, b;
	b = a << 2;
	a = a >> 1;
	printf("%d\n", a + b);
}
*/
/* 6��
main()
{
	int a = 5, b = 3, c;
	c = a * (a - b) - (a < b) * 2;
	printf("%d\n", c);
}
*/
/* 7��
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
/* 8��
main()
{
	int a = 2, b = 3, c, d;
	c = a || b;
	d = a | b;
	printf("%d\n", c + d);
}
*/