/*Ex06_03.c*/
#include <stdio.h>
#pragma warning(disable:4996)

/* �ΰ��� ������ �Է¹޾� 4Ģ������ ó���Ͻÿ�(4���� �Լ� ���. �� ����� main����)

int sum(int a, int b) {
	int s = a + b;
	return s;
}
int sub(int a, int b) {
	int c = a - b;
	return c;
}
int mult(int a, int b) {
	int d = a * b;
	return d;
}
int Division(int a, int b) {
	int f = a / b;
	return f;
}
int main(void) {
	int x, y, result;

	printf("���� 2�� �Է� : ");
	scanf("%d %d", &x, &y);
	result = sum(x, y);
	printf("%d + %d = %d\n", x, y, result);
	result = sub(x, y);
	printf("%d - %d = %d\n", x, y, result);
	result = mult(x, y);
	printf("%d * %d = %d\n", x, y, result);
	result = Division(x, y);
	printf("%d / %d = %d\n", x, y, result);

	return 0;
}
*/

/* 
int main(void)
{
	int count = 0;
	printf("main count = %d\n", count);

	//printCount();

	return 0;
}

void PrintCount(void)
{
	int count = 100;
	printf("PrintCount: count = %d\n", count);
}
*/

/*
void PrintCount(void);
void Increment(void);
void Decrement(void);

int count;

int main(void)
{
	count = 0;
	PrintCount();
	Increment();
	Increment();
	Increment();
	PrintCount();
	Decrement();
	PrintCount();

	return 0;
}

 void PrintCount(void)
{
    printf("count = %d\n", count);
}

void Increment(void)
{
    count++;
}

void Decrement(void)
{
    count--;
}
*/

void Swap(int x, int y);

int main(void)
{
	int a = 10;
	int b = 20;

	printf("Swap ���� a = %d, b = %d\n", a, b);

	Swap(a, b);

	printf("Swap ���� a = %d, b = %d\n", a, b);

	return 0;
}