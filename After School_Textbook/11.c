#include <stdio.h>
#pragma warning(disable:4996)

/*int main(void)
{
	int score = 95;

	printf("90점 이상 100점 이하인가? : %d\n", score >= 90 && score <= 100);

	printf("0점 또는 100점인가? : %d\n", score == 0 || score == 100);
	printf("0점 인가? : %d\n", !score);

	return 0;
}*/

int main(void)
{
	int a,b,c;
	int min,max;
	
	printf("세 개의 정수를 입력하게요 : ");
	scanf("%d %d %d", &a, &b, &c);

		min = a < b ? a : b;
		min = min < c ? min : c;
	    max = a > b ? a : b; 
		max = max > c ? max : c;

		printf("min = %d,max = %d\n",min,max);

		return 0;
}