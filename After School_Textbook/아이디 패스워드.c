#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	FILE*JOIN;
	char ID[10];
	char Pass[10];
	int number;
	JOIN = fopen("ID.txt", "w");

	printf("������� ���� �Է��ϼ���: ");
	scanf("%d", &number);

	for (int i = 1; i <= number; i++) {
		printf("���̵� �Է��ϼ���: ");
		scanf("%s", ID);
		printf("�н����带 �Է��ϼ���: ");
		scanf("%s", Pass);
	}
}