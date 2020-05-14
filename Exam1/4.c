// 연필 100원, 자 250원, 필통 3000원이며 각각 몇 개씩 샀는지 입력하고 총 지불금액 구하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("구입한 학용품의 갯수를 입력하시오.\n");

	int p, c, pc;
	printf("연필 자 필통 : ");
	scanf("%d %d %d", &p, &c, &pc);

	int sum = 0;
	sum = p * 100 + c * 250 + pc * 3000;

	printf("총 지불금액은 %d원입니다.\n", sum);

}