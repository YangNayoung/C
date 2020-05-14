// 알파벳 대문자를 소문자로 인쇄하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char Ee;
	printf("대문자 입력 : ");
	scanf("%c", &Ee);
	if (Ee < 65 || Ee>90) 
		printf("문자 입력 오류 : 영문 대문자를 입력하세요.\n");
	else
		printf("소문자 변환 : %c\n", Ee=Ee+32);
}