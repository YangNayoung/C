// 학교와 이름을 입력하여 인쇄하는 프로그램 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s[10];
	printf("학교명을 입력 : ");
	scanf("%s", &s);

	char name[10];
	printf("이름 입력 : ");
	scanf("%s", &name);

	printf("%s 학생은 %s 학교에 다닙니다.\n ", name, s);
}