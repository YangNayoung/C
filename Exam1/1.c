//가로 세로 높이를 정수로 입력받아 사각형의 체적을 구하시오.

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int t, l, h, v = 0;

	printf("가로 : ");
	scanf("%d", &t);

	printf("세로 : ");
	scanf("%d", &l);

	printf("높이 : ");
	scanf("%d", &h);

	printf("가로 : %d, 세로 : %d, 높이가 %d인 사각형의 체적은 %d이다.\n", t, l, h, v = t * l*h);
}