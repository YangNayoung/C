//for �̿��� �͵�

#include <stdio.h>
/* Ex05_06.c */

//1~10����
/*int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	printf("%d\n", i);

	printf("\n");

	return 0;
}*/
 
// 1~50����
/*int main(void)
{
	int i;

	for (i = 1; i <= 50; i++)
		printf("%d\n", i);

	printf("\n");

	return 0;
}*/

//¦���� ������
/*int main(void)
{
	int i;

	for (i = 0; i <= 50; i=i+2)
		printf("%d\n", i);

	printf("\n");

	return 0;
}*/

//Ȧ���� ������
/*int main(void)
{
	int i;

	for (i = 1; i <= 50; i = i + 2)
		printf("%d\n", i);

	printf("\n");

	return 0;
}*/

//2�� ����̸鼭 3�� ��� �� ��
/*int main(void)
{
	int i;

	for (i = 1; i <= 50; i = i++)
	{
		if ((i % 2 == 0) && (i % 3 == 0))
			printf("%d\n", i);
		}
	
    printf("\n");

	return 0;
}*/

//for�� �̿��� �հ� �� ���ϱ�
/*int main(void)
{
	int i;
	int sum = 0;
	int factorial = 1;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		factorial *= i;
	}	

	printf("1~10�� �հ� : %d\n", sum);
	printf("1~10�� �� : %d\n", factorial);

	return 0;
}*/

//while �̿��� �հ� �� ���ϱ�
int main(void)
{
	int i;
	int sum = 0;
	int factorial = 1;

	i = 1;
	while (i<=10)
	{
		sum = sum + i;
		factorial=factorial*i;
		i++;
	}
	
	printf("1~10�� �հ� : %d\n", sum);
	printf("1~10�� �� : %d\n", factorial);

	return 0;
}




















