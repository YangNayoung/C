#include <stdio.h>
#pragma warning(disable:4996)

/*int main()
{
	int num;
	int thousands, tens;

	printf("6자리 정수를 입력하세요 :");
	scanf("%d",&num);

	thousands = num / 1000;
	tens = num % 1000;
	printf("%d,%d\n", thousands, tens);
	
	return 0;
}*/

int main(void)
{
	int count = 10;
	int value1 = 0; 
	int value2 = 0;
	
	value1 = ++count;
	printf("value2 = %d, count = %d\n", value2, count);

	count = 10;
	value2 = count++;
	printf("value2 = %d, count = %d\n", value2, count);

	return 0;
}