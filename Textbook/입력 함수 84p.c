#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void main()
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	int k;
	k = printf;
	printf("%d\n",k);

	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d / %d = %d\n", x, y, x / y);
	printf("%d %% %d = %d\n", x, y, x % y);

	getchar();

	// �ƽ�Ű�ڵ尡 ����
	int p;
	p = getchar();
	printf("%d\n", p);
	// ������ ���ڴ� ���� ��ȯ ����
	int p;
	p = getchar();
	printf("%c\n", p);

	return 0;
}