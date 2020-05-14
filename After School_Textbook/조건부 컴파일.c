#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TC
#ifdef  TC
#include <conio.h>
#define MAX_INT 32767
#else
#define MAX_INT 2147483647
#endif //  TC

int main()
{
	int m = MAX_INT;
#ifdef TC
	system("cls");
#endif // TC
	printf("Maximum value => %d\n", m);
#ifdef TC
	
#endif // TC
	return 0;
}
