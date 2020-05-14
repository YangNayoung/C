#include <stdio.h>
int Getfact(int n);
double Add(double x, double y);

void main() {
	int(*pFunc)(int n) = &Getfact;
	double(*pf)(double, double) = Add;
	int num;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &num);
	printf("%d != %d\n", num, (*pFunc)(num));

	printf("0.5 + 1.3 = %.1f\n", pf(0.5, 1.3));
}

int Getfact(int n) {
	int sum = 1;
	for (int i = 1; i <= n; i++)
		sum *= i;
	return sum;
}

double Add(double x, double y) {
	return x + y;
}