#include <stdio.h>
/*
int main()
{
	static int a[5][5];
	int k, m, n = 4;

	a[0][0] = 1;
	for (int k = 1; k < 5; k++) {
		for (int m = 1; m < 5; m++) {
			if (m == 0)
				a[k][m] = 1;
			else
				a[k][m] = a[k - 1][m] + a[k - 1][m - 1];
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				printf(a[i][j]);
				printf("\n");
			}
		}
	}
	return 0;
}*/

int main()
{
	int a, sum=0;
	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int a = 0; a < 10; a++) {
		if (num[a] % 2 == 1)
			sum+=num[a];
	}
	printf("%d\n",sum);

	return
}