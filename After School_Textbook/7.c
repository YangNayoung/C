#include <stdio.h>
#define PI 3.141592
#define SQUARE(x)  ( (x) * (x) )
#define CUBE(x)  ( SQUARE(x) * (x) )
#define MULT(x,y)  ( (x) * (y) )
int main(void)
{
	printf("�Ǽ� ������ %.2f �Դϴ�.\n", SQUARE(4.25));
	printf("�Ǽ� CUBE�� %.2f �Դϴ�.\n", CUBE(4.25));
	printf(" �� �Ǽ� ���� %.2f�Դϴ�", MULT(2.78, 3.62));

	return 0;
}