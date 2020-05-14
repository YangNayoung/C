// 인원수와 인원수만큼의 학생 몸무게(소수 이하 2자리까지)를 입력하여 몸무게의 합과 평균 구하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	float b, sum = 0;
	printf("인원 수 입력 : ");
	scanf("%d", &n);

	printf("%d명의 몸무게를 입력하세요.\n",n);
	for(int i=1; i<=n; i++) {
		scanf("%f", &b);
		sum+= b;
	}

	printf("몸무게의 합 = %.2f\n", sum);
	printf("몸무게의 평균 = %.2f\n", sum / n);
}