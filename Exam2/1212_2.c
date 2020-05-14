#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money;
	printf("금액 입력(천원단위까지 입력) : ");
	scanf("%d", &money);
	int unlt = 100000;
	while (unlt > 1000) {
		unlt = unlt / 2;
		int su = money / unlt;
		su = money / unlt;
		money = money % unlt;
		printf("%d원권 %d개\n", unlt, su);
		unlt = unlt / 5;
		su = money / unlt;
		money = money % unlt;
		printf("%d원권 %d개\n6", unlt, su);
	}
}