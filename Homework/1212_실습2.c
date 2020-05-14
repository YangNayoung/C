#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pp(int n);

void main()
{
	int num;
	scanf("%d", &num);
	printf("%2d\n", pp(num));
}

int pp(int n)
{
	int i = 1, sum = 0;

	do {
		i *= 10;
	} while (n > i);

	while (i>=1)
	{
		sum += n / i;
		n %= i;
		i /= 10;
	}
	return sum;
}
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pp(int n) {
	int temp = n;
	int sum = 0;
	while (temp != 0) {
		int rem = temp % 10;
		temp = temp / 10;
		sum += rem;
	}
	return sum;
}

void main()
{
	int num;
	scanf("%d", &num);
	printf("%2d\n", pp(num));
}
*/
