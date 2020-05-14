#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	for (int i = 1;i <= 3;i++) { // 행
		for (int j = 1;j <= i;j++)// 열
			printf("%d",i);
		printf("\n");
	}
	return 0;
}
*/
/*
int main()
{
	int line;
	scanf("%d", &line);
	for (int i = 'Z';i >= 'Z' - line;i--) { // 행
		for (int j = 'Z';j >= i;j--)// 열
			printf("%C", j);
		printf("\n");
	}
	return 0;
}
*/
/*
int main()
{
	char line;
	scanf("%c", &line);
	for (int i = 'A';i <= line;i++) { 
		for (int j = 'A';j < i;j--)
			if (i == j) printf("%c", i);
			else printf("\n");
		printf("\n");
	}
	return 0;
}
*/
int main()
{
	int in;
	scanf("%d", &in);
	for (int i = 1;i <= in;i++) { // 행
		for (int j = 1;j <= in - i;j++) printf(" "); // 공백
		for (int j = 1;j <= i;j++)// 열
			printf("%c", 64 + i);
		printf("\n");
	}
	return 0;
}
