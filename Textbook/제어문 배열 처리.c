/*  2-45 for���� ����� �迭 ��ڰ� ���

#include <stdio.h>

int main()
{
	int a[7] = { 1,2,3,4,5,6 };
	int i;
	for (i = 0; i < 7; i++) {
		printf("%2d", a[i]);
	}
	printf("\n");
	return 0;
}*/

// for���� �̿��� �迭 ��ڰ��� �ʱ�ȭ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a[3];
	int i;
	for (i = 0; i < 3; i++) {
		scanf("%f", &a[i]);
	}
	printf("a[3]�� ��ڰ� ���:");
	for (i = 0; i < 3; i++) {
		printf("%2f", a[i]);
		printf("\n");
	}
	printf(sizeof a[]);
	return 0;
}