#include <stdio.h>

int main()
{
	int b[2][3];
	printf("��ü ������: %d ���� ��:%d ��:%d\n", sizeof b, sizeof b[0], sizeof b/sizeof b[0]); // ������ �迭

	char a[3][5][4];
	printf("��ü ������: %d ���� ��: %d ��: %d ��: %d\n", sizeof a, sizeof a[0], sizeof a[0][0], sizeof a/sizeof a[0]);
	// 3���� �迭
	return 0;
}