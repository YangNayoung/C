// ���� 100��, �� 250��, ���� 3000���̸� ���� �� ���� ����� �Է��ϰ� �� ���ұݾ� ���ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("������ �п�ǰ�� ������ �Է��Ͻÿ�.\n");

	int p, c, pc;
	printf("���� �� ���� : ");
	scanf("%d %d %d", &p, &c, &pc);

	int sum = 0;
	sum = p * 100 + c * 250 + pc * 3000;

	printf("�� ���ұݾ��� %d���Դϴ�.\n", sum);

}