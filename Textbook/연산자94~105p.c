/* ��� ������ 96p.
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

/* ���� ������ 97p.
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

/* ���� ������ 98p.
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
/* ���� ������ ��.
#include <stdio.h>

void main()
{
	int a = 2, b = 3, c = 4;
	int d = a++ + --b - c++;
	int e= a + b + c + d;
	printf("a: %d b: %d c: %d d: %d e: %d\n", a, b, c, d, e);

}
*/
/* ���� ������ 100p.
#include <stdio.h>

void main()
{
	int a = 1, b = 2, c = 3;
	if (a < b) printf("b�� ũ��.\n");
	if (b = c) printf("b��c�� ����.\n");
	if (b != c) printf("b�� c�� �ٸ���.\n");
}
*/
/* ���� ������ 101p.
#include <stdio.h>

void main()
{
	int a = 1, b = 2, max;
	max = (a > b) ? a : b;
	printf("%d\n", max);
}
*/
/* �� ������ 102p.
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
/* ��Ʈ ������ 103p.
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
/* ����Ʈ ������ 104p.
#include <stdio.h>

void main()
{
	int s1 = 2;
	int s2 = 8;
	printf("s1 <<1 =%d\n", s1 << 1); //����Ʈ ���� �������� 1�̵�
	printf("s2 >>1 =%d\n", s2 >> 1); //����Ʈ ���� ���������� 1�̵�
}
*/
/* �� ��ȯ ������ 105p.
#include <stdio.h>

void main()
{
	int a = 3, x;

	float y, z;
	x = a / 2;
	y = a / 2;

	z = (float)a / 2; // ĳ��Ʈ ���
	printf("x=%2d\n y=%f\n z=%f\n", x, y, z);
}
*/
/* ����
#include <stdio.h>

void main()
{
	int b, c, d = 3; // d���� ���� �� �־ ����
	b = d * 2; // 
	c = 10;
	printf("%d %d %d", b, c, d);

}
*/
// �޸��� �����ڴ�. 106p.
#include <stdio.h>

void main()
{
	int x = 1, y = 2;
	printf("�޸�(,)��"), printf("�������̴�\n");

	x = x + 1, y = y + 1;
	printf("x=%d", x), printf("y=%d", y), printf("\n");
	return 0;
}