// �Լ� ȣ��

/*Ex06_03.c*/
#include <stdio.h>
#pragma warning(disable:4996)

/* void PrintHello(); ---> main�� ���� �ְ� PrintHello(); �� �Ʒ� ������ main ���� �������.

void PrintHello()
{
	printf("Hello World\n");
}

int main()
{
	PrintHello();

	return 0;
}
*/

/*return �� ���� ���ڸ� ���� �Լ��� ȣ�� ���� 

void PrintSumAndProdut(int a, int b) 
{
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d * %d = %d\n", a, b, a * b);
}

int main(void)
{
	int x, y;

	PrintSumAndProdut(10, 20); // 10, 20�� ���� a, b�� ���� ��

	printf("������ �Է��ϼ���: ");
	scanf("%d %d", &x, &y); 
	PrintSumAndProdut(x, y); // x�� a�� �ǰ� y�� b�� ��.

	return 0;
}
*/

/* return �� �ְ� ������ ���� ���� �Լ��� ȣ�� ����

int GetFactorial(int num)
{
	int i;
	int fact = 1;
	for(i = 1; i <= num; i++)
		fact *= i;
	return fact;
}

int GetSum(int num)
{
	int i;
	int sum =  0;
	for(i = 1; i <= num; i++)
		sum += i;
	return sum;
}

int main(void)
{
	int result, x;
	scanf("%d", &x);
	result = GetFactorial(x);
	printf(" ���丮�� = %d\n", result);
	result = GetFactorial(x);
	printf("  �հ� = %d\n", result);
	return 0;
}
*/