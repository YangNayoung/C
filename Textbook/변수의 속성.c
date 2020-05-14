#include <stdio.h>

main() 
{
	int a = 20;
	printf("%d\n", a);

	int b = 50;
	printf("%d\n", b);
}

int main() 
{
	f();
	int a = 10;
	{
		//int a = 40;
		printf("%d\n", a);
	}
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}