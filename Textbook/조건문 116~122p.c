#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �ܼ� if�� (���� 2-31) 
int main()
{
	int score;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &score);
	if (score >= 70)
		printf("�հ��Դϴ�.\n");
	return 0;
}
*/
/* Ȧ��
int main()
{
	int score;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &score);
	if (score %2==1)
		printf("Ȧ���Դϴ�..\n");
	return 0;
}
*/
/* ���� if�� (���� 2-32)
int main()
{
	int age;
	printf("����� ���̴�? (1. 15���̻�,  2. 15�� �̸�): ");
	scanf("%d", &age);
	if (age == 1)
	{
		printf("���� �����մϴ�.\n");
	}
	if (age == 2)
		printf("������ �� �����ϴ�.\n");
	return 0;
}
*/
/*
int main()
{
	int age;
	printf("����� ���̴�? \n ");
	scanf("%d", &age);
	if (age >= 20)
		printf("���� �����մϴ�.\n");
	else
		printf("������ �� �����ϴ�.\n");
	
}
*/
/*
int main()
{
	int A;
	printf("���� �Է��ϼ���.\n");
	scanf("%d", &A);
	if (A >= 0) {
		printf("%d ���� : %d", A, A);
	}
	else {
		printf("%d ���� : %d", A, A - 2 * A);
	}
	return 0;

}
*/
/* ��ø if��
int main()
{
	int color;
	printf("������ ������? (1.�����  2.�Ķ���  3.������)\n");
	scanf("%d", &color);
	if (color == 1)
		printf("�����-A�� \n");
	else if (color == 2)
		printf("�Ķ���-B�� \n");
	else if (color == 3)
		printf("������-C�� \n");
	return 0;
}
*/
/* switch ~ case��
int main()
{
	int cap;
	printf("���� ������ ������? (1.�̱� 2.�Ϻ� 3.�߱�)\n");
	scanf("%d", &cap);
	switch (cap) {
	case 1: printf("�̱� : ������ D.C\n"); break;
	case 2: printf("�Ϻ� : ����\n"); break;
	case 3: printf("�߱� : ����¡\n"); break;
	default: printf("�Է¿����Դϴ�.\n");
	}
	return 0;
 }
 */
int main()
{
	char a, b, c, d, A, B, C, D;
	printf("a~d ���� �� ���� �� �Է� \n");
	switch (1) {
	case 'a': case 'A' : printf("Apple");
	case 'b': case 'B' : printf("Banana");
	case 'c': case 'C' : printf("Coconut");
	case 'd': case 'D' : printf("Durian"); break;
	default: printf("Error");
	}
}