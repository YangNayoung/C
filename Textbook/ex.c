#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void scanData(int n, double *pp) { // Ÿ�� ��ġ, �� ����. �Է� �Լ� ���� 
	for (int i = 0; i < n; i++) {
		// scanf("%d", (pp + i));
		scanf("%lf", &pp[i]);
	}
}
void printData(int num, double *p) { // Ÿ�� ��ġ, �� ����. ��� �Լ� ����
	for (int i = 0; i < num; i++)
		// printf("%d ", *(p + i));
		printf("%lf %p\n", p[i], p + i); // ��, �ּ� 
}
void main()
{
	// int a[10];
	double *p = 0; // �����͸� 0(NULL)���� �ִ� ����-> �����Ϳ� ������ ���� ���� �ʱ� ����
	// p = &a;
	int num;

	printf("�Է��� ������ ���� : ");
	scanf("%d", &num);
	p = (double *)malloc(sizeof(double)*num); // Ÿ�� ��ġ
	scanData(num,p); // ���� �Ѱ��ش�. �Լ� ���
	printData(num,p); // ���� �Ѱ��ش�. �Լ� ���
	printf("\n");
	free(p); // malloc�� ¦��! �� ���� malloc�� �޸� ��� ��Ƹ���.  free�� ���� ���ش�.

	// �迭 �̿�
	/* for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	// ������ �̿�
	for (int i = 0; i < 10; i++) {
		scanf("%d", (p + i));
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", *(p + i));
	printf("\n"); */
}