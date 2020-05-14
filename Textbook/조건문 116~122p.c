#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 단순 if문 (예제 2-31) 
int main()
{
	int score;
	printf("성적을 입력하세요.\n");
	scanf("%d", &score);
	if (score >= 70)
		printf("합격입니다.\n");
	return 0;
}
*/
/* 홀수
int main()
{
	int score;
	printf("정수을 입력하세요.\n");
	scanf("%d", &score);
	if (score %2==1)
		printf("홀수입니다..\n");
	return 0;
}
*/
/* 다중 if문 (예제 2-32)
int main()
{
	int age;
	printf("당신의 나이는? (1. 15세이상,  2. 15세 미만): ");
	scanf("%d", &age);
	if (age == 1)
	{
		printf("입장 가능합니다.\n");
	}
	if (age == 2)
		printf("입장할 수 없습니다.\n");
	return 0;
}
*/
/*
int main()
{
	int age;
	printf("당신의 나이는? \n ");
	scanf("%d", &age);
	if (age >= 20)
		printf("입장 가능합니다.\n");
	else
		printf("입장할 수 없습니다.\n");
	
}
*/
/*
int main()
{
	int A;
	printf("수를 입력하세요.\n");
	scanf("%d", &A);
	if (A >= 0) {
		printf("%d 절댓값 : %d", A, A);
	}
	else {
		printf("%d 절댓값 : %d", A, A - 2 * A);
	}
	return 0;

}
*/
/* 중첩 if문
int main()
{
	int color;
	printf("출입증 색깔은? (1.노란색  2.파란색  3.빨간색)\n");
	scanf("%d", &color);
	if (color == 1)
		printf("노란색-A방 \n");
	else if (color == 2)
		printf("파란색-B방 \n");
	else if (color == 3)
		printf("빨간색-C방 \n");
	return 0;
}
*/
/* switch ~ case문
int main()
{
	int cap;
	printf("다음 국가의 수도는? (1.미국 2.일본 3.중국)\n");
	scanf("%d", &cap);
	switch (cap) {
	case 1: printf("미국 : 워싱턴 D.C\n"); break;
	case 2: printf("일본 : 도쿄\n"); break;
	case 3: printf("중국 : 베이징\n"); break;
	default: printf("입력오류입니다.\n");
	}
	return 0;
 }
 */
int main()
{
	char a, b, c, d, A, B, C, D;
	printf("a~d 까지 중 선택 후 입력 \n");
	switch (1) {
	case 'a': case 'A' : printf("Apple");
	case 'b': case 'B' : printf("Banana");
	case 'c': case 'C' : printf("Coconut");
	case 'd': case 'D' : printf("Durian"); break;
	default: printf("Error");
	}
}