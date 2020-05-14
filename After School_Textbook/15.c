//for 이용한 것들

#include <stdio.h>
/* Ex05_06.c */

//1~10까지
/*int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	printf("%d\n", i);

	printf("\n");

	return 0;
}*/
 
// 1~50까지
/*int main(void)
{
	int i;

	for (i = 1; i <= 50; i++)
		printf("%d\n", i);

	printf("\n");

	return 0;
}*/

//짝수만 나오게
/*int main(void)
{
	int i;

	for (i = 0; i <= 50; i=i+2)
		printf("%d\n", i);

	printf("\n");

	return 0;
}*/

//홀수만 나오게
/*int main(void)
{
	int i;

	for (i = 1; i <= 50; i = i + 2)
		printf("%d\n", i);

	printf("\n");

	return 0;
}*/

//2의 배수이면서 3의 배수 인 수
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

//for을 이용해 합과 곱 구하기
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

	printf("1~10의 합계 : %d\n", sum);
	printf("1~10의 곱 : %d\n", factorial);

	return 0;
}*/

//while 이용해 합과 곱 구하기
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
	
	printf("1~10의 합계 : %d\n", sum);
	printf("1~10의 곱 : %d\n", factorial);

	return 0;
}




















