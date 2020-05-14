// 원화 100,000을 달러로 계산하시오

#include <stdio.h>

void main()
{
	printf("%d달러\n",(100000 / 1118));
	printf("거스름돈 : %d원\n", 100000 - (100000 / 1118) * 1118);
	
	return 0;
}