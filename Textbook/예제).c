/*
#include <stdio.h>

int main()
{
	int k;
	sum(3, 5);
	printf("%d\n", sum);
}

int sum(int a, int b)
{
	int sum;
	sum = a + b;
	return sum, a, b;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}

int main() 
{
	printf("First Result %d\n", sum(1, 4));
	int add = sum(10, 9);
	printf("Second Result %d\n", add);
	return 0;

}

