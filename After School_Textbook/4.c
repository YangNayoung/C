/*#include <stdio.h>

#define MESSAGE "학습은 일반언어의 핛습과 \ 같이 반복학습이 중요하다"
#define SQUARE(x)  ( (x) * (x) )
#define CUBE(x)  ( SQUARE(x) * (x) )
#define MULT(x,y)  ( (x) * (y) )
int main(void)
{
     printf("실수 제곱은 %.2f 입니다.\n", SQUARE(4.25));
     printf("실수 CUBE는 %.2f 입니다.\n", CUBE(4.25));
     printf(" 두 실수 곱은 %.2f입니다", MULT(2.78, 3.62));
     puts(MESSAGE);
	 
     return 0;
}*/

#include <stdio.h>

#define myprint(x) printf(x);\
puts("")

int main(void)
{
	myprint("매크로로 출력하기");
	printf("출력함수로 출력하기\n");

	return 0;

}