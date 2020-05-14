/* 산술 연산자 96p.
#include <stdio.h>

void main()
{
	int x, y, z;
	x = 2;
	y = x;
	z = 5 - x;
	printf("%d\n %d\n %d\n", x, y, z);
}
*/

/* 증감 연산자 97p.
#include <stdio.h>

void main()
{
	int a = 3 ;
	int b = 0;
	b = a++ + 5;
	printf("b: %d\n a: %d\n", b, a);
	a = 3;
	b = ++a + 5;
	printf("b: %d\n a: %d\n", b, a);
}
*/

/* 증감 연산자 98p.
#include <stdio.h>

void main()
{
	int a, b, c = 0;
	a = ++c;
	printf("%d\n", c);
	b = c++;
	printf("%d\n", c);
	printf("%d %d %d\n", a, b, ++c);
	return 0;
}
*/
/* 증감 연산자 예.
#include <stdio.h>

void main()
{
	int a = 2, b = 3, c = 4;
	int d = a++ + --b - c++;
	int e= a + b + c + d;
	printf("a: %d b: %d c: %d d: %d e: %d\n", a, b, c, d, e);

}
*/
/* 관계 연산자 100p.
#include <stdio.h>

void main()
{
	int a = 1, b = 2, c = 3;
	if (a < b) printf("b가 크다.\n");
	if (b = c) printf("b와c는 같다.\n");
	if (b != c) printf("b와 c는 다르다.\n");
}
*/
/* 조건 연산자 101p.
#include <stdio.h>

void main()
{
	int a = 1, b = 2, max;
	max = (a > b) ? a : b;
	printf("%d\n", max);
}
*/
/* 논리 연산자 102p.
#include <stdio.h>

void main()
{
	int a = 3, b = 1;
	int x, y;
	x != (a > b);
	y = (a == b) && (a < b) == (a > b || a == b);
	printf("x=%d\n", x);
	printf("y=%d\n", y);
}
*/
/* 비트 연산자 103p.
#include <stdio.h>

void main()
{
	int a = 7, b = 2, c = 5, x, y, z;
	x = b & c;
	y = a ^ b;
	z = a | c;
	printf("x=%d\n", x); 
	printf("y=%d\n", y); 
	printf("z=%d\n", z);
}
*/
/* 시프트 연산자 104p.
#include <stdio.h>

void main()
{
	int s1 = 2;
	int s2 = 8;
	printf("s1 <<1 =%d\n", s1 << 1); //시프트 연산 왼쪽으로 1이동
	printf("s2 >>1 =%d\n", s2 >> 1); //시프트 연산 오른쪽으로 1이동
}
*/
/* 형 변환 연산자 105p.
#include <stdio.h>

void main()
{
	int a = 3, x;

	float y, z;
	x = a / 2;
	y = a / 2;

	z = (float)a / 2; // 캐스트 사용
	printf("x=%2d\n y=%f\n z=%f\n", x, y, z);
}
*/
/* 오류
#include <stdio.h>

void main()
{
	int b, c, d = 3; // d에만 수가 들어가 있어서 오류
	b = d * 2; // 
	c = 10;
	printf("%d %d %d", b, c, d);

}
*/
// 콤마도 연사자다. 106p.
#include <stdio.h>

void main()
{
	int x = 1, y = 2;
	printf("콤마(,)도"), printf("연산자이다\n");

	x = x + 1, y = y + 1;
	printf("x=%d", x), printf("y=%d", y), printf("\n");
	return 0;
}