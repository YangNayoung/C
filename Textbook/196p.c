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
		printf("a[] = %d\n", *(p++)); // �� �ڿ� �޸𸮰� �־ �����ʹ� ��� ������. */

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, (p + i)); // ������ ������ ��ŭ ����
	printf("\n");

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, &a[i]);
}