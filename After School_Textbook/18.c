/* Ex05_06.c */
#include <stdio.h>
#pragma warning(disable:4996)

/*int main() 
{
	int num;
	char choice;

	while (1)
	{
		printf("정수를 입력하세요:");
		scanf("%d", &num);

		if (num % 2 == 0)
			printf("%d는 짝수입니다.\n", num);
		else
			printf("%d는 홀수입니다.\n", num);

		printf("계속 하시겠습니까? (Y/N) : ");
		scanf(" %c", &choice);
		if (choice == 'N' || choice == 'n')
			break;
	}

	return 0;
}*/

/*int main()
{
	char e;

	printf("영문자를 입력하십시오:");
	scanf("%c", &e);

	if (65 <= e && e <= 90)
		printf("대문자입니다.\n");
	else if (97 <= e && e <= 122)
		printf("소문자입니다.\n");
	else
		printf("영문자가 아닙니다.\n");

	return 0;
}*/

int main()
{
	char e;
	while (1)
	{
		printf("영문자를 입력하십시오:");
		scanf(" %c", &e);

		if (e == ".");
		break;
		if (65 <= e && e <= 90)
			printf("대문자입니다.\n");
		else if (97 <= e && e <= 122)
			printf("소문자입니다.\n");
		else
			printf("영문자가 아닙니다.\n");

		return 0;
	}
}