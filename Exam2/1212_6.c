#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int n) {
	if (n == 1)return 1;
	else return fact(n - 1)*n;
}

int main()
{
	int su;
	printf("마지막 수 입력 : ");
	scanf("%d", &su);
	int sum = 0;

	for (int i = 1; i <= su; i++) {
		if (i == su) printf("%d! = ", i);
		else printf("%d! + ", i);
		sum += fact(i);
	}
	printf("%d\n", sum);
}