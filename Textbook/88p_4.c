#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	/* ��Ǭ�� ���ϱ�
	float k = 0.375;

	int a = (k * 10);//3
	int b = (k * 100) - a * 10;//37-30
	int c = (k *1000) - (a * 100 + b * 10); //375-370

	printf("��: %d\n", a);
	printf("Ǭ: %d\n", b);
	printf("��: %d\n", c);
	*/ 

	int c;

	int k= printf("�糪��\n");
	printf("%d\n", k); // ���� �� ���

	int p = scanf("%d %d", &k,&c);
	printf("%d\n", p); // �Է��� ������ �� ���

	return 0;
}