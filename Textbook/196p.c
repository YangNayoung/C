#include <stdio.h>

void main()
{
	int a[] = { 10,20,30,40,50 };
	int i;
	int *p;
	p = a;

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, *(p + i));
	printf("\n");

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);
	printf("\n");

	/* while (p != NULL)
		printf("a[] = %d\n", *(p++)); // 그 뒤에 메모리가 있어서 포인터는 계속 찍힌다. */

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, (p + i)); // 데이터 사이즈 만큼 증가
	printf("\n");

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, &a[i]);
}