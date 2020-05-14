#include <stdio.h>

/* 1¹ø ¹®Á¦
void main()
{
	int k,m;
	int d[10] = { 1,5,3,2,1,4,2,5,3,1 };
	int cnt[5] = { 0 };

	for (int i = 0; i < 10; i++) {
		for (int j = 1; j <= 5; j++) {
			if (d[i] == j)
				cnt[j - 1]++;
		}
	}
	for (int i = 0; i < 5; i++)
		printf("%d | %d\n", i + 1, cnt[i]);
}*/

int main()
{
	int su[7] = { 1,0,1,1,0,1,1 };
	int cnt=0;

	for (int i = 0; i < 7; i++) {
		if (su[i] == 1)
			cnt++;
	}
	if (cnt % 2 == 1)
		printf("0\n");
	else
		printf("1\n");

	return 0;
}