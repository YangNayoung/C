//���� ���� ���̸� ������ �Է¹޾� �簢���� ü���� ���Ͻÿ�.

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int t, l, h, v = 0;

	printf("���� : ");
	scanf("%d", &t);

	printf("���� : ");
	scanf("%d", &l);

	printf("���� : ");
	scanf("%d", &h);

	printf("���� : %d, ���� : %d, ���̰� %d�� �簢���� ü���� %d�̴�.\n", t, l, h, v = t * l*h);
}