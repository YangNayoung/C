/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[100];
	int i, num;
	int *p = NULL;

	printf("�迭�� ũ�⸦ �����ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);

	for (p = arr, i = 0; i < num; i++, p++)
		printf("%3d", *p);

	printf("\n");

	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, num;
	int *p = NULL;

	printf("�迭�� ũ�⸦ �����ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	p = (int *)malloc(num * sizeof(int));

	for (i = 0; i < num; i++, p++)
		scanf("%d", p);
	p -= num;
	for (i = 0; i < num; i++, p++)
		printf("%3d\n", *p);
	p -= num;

	return 0;
}