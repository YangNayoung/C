// 6��
/*#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int x;

	printf(" ���� õ�� ������ �ϳ��� ���� �Է� >> ");
	scanf("%d", &x);
    printf("�Է��Ѽ�%d��     ",x);
    printf("%d��          ", x /10000);
    printf("%dõ          ", (x /10000) / 1000);
    printf("%d��          ", (x /1000) / 100);
    printf("%d��          ", (x /100) / 10);
    printf("%d�Դϴ�.\n   ", x % 10);
    system("PAUSE");

	return 0;
}*/

//10��

#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	double rate = 0.045;
	double origin = 1000000, total;
	int period;

	printf("��ġ�Ⱓ�Է�(��):");
	scanf("%d", &period);
	total = origin * (1 + rate * period);
	printf("���ݾ�: %.2f\n", total);

	return 0;
}

