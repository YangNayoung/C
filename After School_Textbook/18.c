/* Ex05_06.c */
#include <stdio.h>
#pragma warning(disable:4996)

/*int main() 
{
	int num;
	char choice;

	while (1)
	{
		printf("������ �Է��ϼ���:");
		scanf("%d", &num);

		if (num % 2 == 0)
			printf("%d�� ¦���Դϴ�.\n", num);
		else
			printf("%d�� Ȧ���Դϴ�.\n", num);

		printf("��� �Ͻðڽ��ϱ�? (Y/N) : ");
		scanf(" %c", &choice);
		if (choice == 'N' || choice == 'n')
			break;
	}

	return 0;
}*/

/*int main()
{
	char e;

	printf("�����ڸ� �Է��Ͻʽÿ�:");
	scanf("%c", &e);

	if (65 <= e && e <= 90)
		printf("�빮���Դϴ�.\n");
	else if (97 <= e && e <= 122)
		printf("�ҹ����Դϴ�.\n");
	else
		printf("�����ڰ� �ƴմϴ�.\n");

	return 0;
}*/

int main()
{
	char e;
	while (1)
	{
		printf("�����ڸ� �Է��Ͻʽÿ�:");
		scanf(" %c", &e);

		if (e == ".");
		break;
		if (65 <= e && e <= 90)
			printf("�빮���Դϴ�.\n");
		else if (97 <= e && e <= 122)
			printf("�ҹ����Դϴ�.\n");
		else
			printf("�����ڰ� �ƴմϴ�.\n");

		return 0;
	}
}