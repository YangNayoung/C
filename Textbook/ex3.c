#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main()
{
	int menu, su1, su2;
	int(*calc[4])(int, int) = { add, subtract,multply,divide }; 
	printf("����� ������� ������.\n");
	printf("1.����  2.����  3.����  4.������\n");
	scanf("%d", &menu);
	printf("����� �� ���� �Է��ϼ���. ");
	scanf("%d", &su1);
	scanf("%d", &su2);
	int sum = calc[menu-1](su1, su2);
	printf("���� ����� %d�Դϴ�.\n", sum);
	// pritnf("�Լ��� �ּ� : %p", add);
	return 0;
}