#include <stdio.h>

/*int main(void)
{
     printf("자료형 : 크기(바이트)\n");
     printf("char : %d %d\n", sizeof(char), sizeof(unsigned char));
     printf("short : %d %d\n", sizeof(short), sizeof(unsigned short))
     printf("int : %d %d\n", sizeof(int), sizeof(200));
     printf("long : %d %d\n", sizeof(long), sizeof(300L));
     printf("long long : %d %d\n", sizeof(long long), sizeof(900LL));
     printf("float : %d %d\n", sizeof(float), sizeof 3.14F);
     printf("double : %d %d\n", sizeof(double), sizeof 3.24L);
     return 0;

}*/

int main(void)
{
	const double RATE = 0.03;
	int deposit = 800000;

printf("이자율: %f\n", RATE);
	printf("계좌 잔고: %d\n", deposit);
	printf("이자액: %f\n", deposit * RATE);

	char* str = "좋은 C 언어 입문서";
	char* const title = "진보된 C 언어";

	str = "최근 가장 좋은 C 언어 입문서";
	title = "C 언어 스케치"; //수정 불가능
	printf("\n%s: %s\n", str, title); //문자열 변수 출력
	return 0;
}