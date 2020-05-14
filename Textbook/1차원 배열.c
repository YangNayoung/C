/* 
#include <stdio.h>

void main()
{
	int a[5] = { 1,3,5,7,9 };
	for (int i = 0; i <= 4; i++)
		printf("%3d", a[i]);
	printf("\n");
} */
/* 
#include <stdio.h>  

void main()
{
	int a[5] = { 1, };
	for (int i = 0; i <= 4; i++)
		printf("%3d", a[i]);  // 빈 공간 0으로 채움
	printf("\n");
} */
#include <stdio.h>

void main()
{
	double a[] = {1,2,3};
	for (int i = 0; i <= (sizeof(a))/(sizeof(double)); i++)  // (sizeof(a))/(sizeof(double)) 배열 크기
		printf("%3f", a[i]);
	printf("\n");
}