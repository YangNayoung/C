#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 1�� ����
void main()
{
	int A, B, C;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	// A == 1 ? "�հ�" : B > 90 ? C > 50 ? "�հ�" : "���հ�" : "���հ�";
	(A == 1) || (B > 90 && C > 50) ? printf("�հ�") : printf("���հ�");

}
*/
/* 2�� ����
void main()
{
	int x, y, a, b;
	scanf("%d", x);
	scanf("%d", y);

	a = x / y;
	b = x % y;

	if (x = y * a + b) {
		printf("�����Ѵ�.");
	}
	else {
		printf("�������� �ʴ´�.");
	}
}
*/
/* 3�� ����
void main()
{
	int a = 1, sum = 0;
	while(1) {
		sum = sum + a;
		if (a >= 7)
		{
			break;
		}
		a = a + 2;
	}
	printf("%d\n", sum);
}
*/