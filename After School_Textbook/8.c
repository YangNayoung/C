#include<stdio.h>
#pragma warning(disable:4996)
/* int main(void)
{
	int dec = 30, oct = 012, hex = 0x5E;
	printf("�� ���� ������ ���� ������ ���� �Է��ϼ���.");
	printf("������ - ������ - ��������\n");

	scanf("%d - %o - %x", &dec, &oct, &hex);
	printf("\n�Է��� ���� ������ �����ϴ�.\n");
	printf("%d - %o - %x\n", dec, oct, hex);
	printf("%d - %o - %x\n", dec, oct, hex);

	return 0;
}*/

int main(void)
{
	int a, b, c;
	a = b = c = 5;

	printf("a = a + 2 ==> %d\n", a = a + 2);
	printf("a ==> %d\n", a);
	printf("a = b + c ==> %d\n", a = b + c);
	printf("a ==> %d\n", a);

	return 0;
}