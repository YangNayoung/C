#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	FILE*JOIN;
	char ID[10];
	char Pass[10];
	int number;
	JOIN = fopen("ID.txt", "w");

	printf("사용자의 수를 입력하세요: ");
	scanf("%d", &number);

	for (int i = 1; i <= number; i++) {
		printf("아이디를 입력하세요: ");
		scanf("%s", ID);
		printf("패스워드를 입력하세요: ");
		scanf("%s", Pass);
	}
}