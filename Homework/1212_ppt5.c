#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void First()
{
	printf("Call function First\n");
	Second();
}

void Third()
{
	Second();
	printf("Call function Third\n");
}

void Second()
{
	printf("Call function Second\n");
}

int main()
{
	printf("Start call function\n");
	First();
	Third();
	printf("End call function\n");

	return 0;
}