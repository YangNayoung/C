#include <stdio.h>

int main()
{
	int b[2][3];
	printf("전체 사이즈: %d 방의 수:%d 행:%d\n", sizeof b, sizeof b[0], sizeof b/sizeof b[0]); // 이차원 배열

	char a[3][5][4];
	printf("전체 사이즈: %d 방의 수: %d 열: %d 면: %d\n", sizeof a, sizeof a[0], sizeof a[0][0], sizeof a/sizeof a[0]);
	// 3차원 배열
	return 0;
}