#include <stdio.h>
/* 
int main()
{
	int i, j;

	for (i = 1; i <= 4; i++) { // 행
		for (j = 1; j <= 3; j++) //열
		{
			printf("@");
		}
		printf("\n");
	}
	return 0;
}
*/
/* A 다음 줄 BB 다음 줄 CCC 다음 줄 DDDD
int main()
{
	int i, j;
	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= i; j++) {
			printf("%c", i + 64);
		}
		printf("\n");
	}
}
*/