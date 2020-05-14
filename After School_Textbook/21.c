// 함수 호출

/*Ex06_03.c*/
#include <stdio.h>
#pragma warning(disable:4996)

/* void PrintHello(); ---> main이 위에 있고 PrintHello(); 가 아래 있을때 main 위에 써줘야함.

void PrintHello()
{
	printf("Hello World\n");
}

int main()
{
	PrintHello();

	return 0;
}
*/

/*return 값 없고 인자를 갖는 함수의 호출 과정 

void PrintSumAndProdut(int a, int b) 
{
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d * %d = %d\n", a, b, a * b);
}

int main(void)
{
	int x, y;

	PrintSumAndProdut(10, 20); // 10, 20이 각각 a, b에 값이 들어감

	printf("정수를 입력하세요: ");
	scanf("%d %d", &x, &y); 
	PrintSumAndProdut(x, y); // x가 a가 되고 y가 b가 됨.

	return 0;
}
*/

/* return 값 있고 임의의 수를 갖는 함수의 호출 과정

int GetFactorial(int num)
{
	int i;
	int fact = 1;
	for(i = 1; i <= num; i++)
		fact *= i;
	return fact;
}

int GetSum(int num)
{
	int i;
	int sum =  0;
	for(i = 1; i <= num; i++)
		sum += i;
	return sum;
}

int main(void)
{
	int result, x;
	scanf("%d", &x);
	result = GetFactorial(x);
	printf(" 팩토리얼 = %d\n", result);
	result = GetFactorial(x);
	printf("  합계 = %d\n", result);
	return 0;
}
*/