#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money;
	printf("�ݾ� �Է�(õ���������� �Է�) : ");
	scanf("%d", &money);
	int unlt = 100000;
	while (unlt > 1000) {
		unlt = unlt / 2;
		int su = money / unlt;
		su = money / unlt;
		money = money % unlt;
		printf("%d���� %d��\n", unlt, su);
		unlt = unlt / 5;
		su = money / unlt;
		money = money % unlt;
		printf("%d���� %d��\n6", unlt, su);
	}
}