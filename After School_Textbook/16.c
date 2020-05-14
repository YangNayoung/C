/* Ex05_06.c */
#include <stdio.h>
#pragma warning(disable:4996)

/*int main() {
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}

	return 0;
}*/

int main() {
	int n;
	int total = 0, odd_total = 0, even_total = 0;
	int i;

	printf("정수를 입력하세요:");
	scanf("%d", &n);

	/*for (i = 1; i <= n; i++)
		total += i;
    for (i = 0; i <= n; i = i + 2)
		even_total += i;
	for (i = 1; i <= n; i = i + 2)
		odd_total += 1;

	printf("1부터 %d까지의 합계 : %d\n", n, total);
	printf("1부터 %d까지의 홀수의 합계 : %d\n", n, odd_total);
	printf("1부터 %d까지의 짝수의 합계 : %d\n", n, even_total);
	system("PAUSE");

	return 0;
	*/

	i = 1;
	while (i <= n)
	{
		odd_total += i;
		i += 2;
	}
	i = 2;
	do {
		even_total += i;
		i + 2;
	} while (i <= n);
	
	printf("1부터 %d까지의 합계 : %d\n", n, total);
	printf("1부터 %d까지의 홀수의 합계 : %d\n", n, odd_total);
	printf("1부터 %d까지의 짝수의 합계 : %d\n", n, even_total);

	return 0;
}