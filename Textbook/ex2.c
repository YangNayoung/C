#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b);

int main()
{
	int(*ptf)(int, int); // add
	ptf = add;
	int sum = ptf(5, 7);
	printf("%d\n", sum);
	// pritnf("�Լ��� �ּ� : %p", add);
	return 0;
}

int add(int a, int b) {
	return a + b;
}