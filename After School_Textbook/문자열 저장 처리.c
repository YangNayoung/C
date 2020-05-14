/*
#include <stdio.h>

int main(void)
{
	char s[] = "swimming";
	char t[5] = "야구";
	printf("s: %s\n", s);
	printf("s[2]: %c\n", s);
	printf("t: %s\n", t);
	printf("t: %c%c\n", t[2], t[3]);

	return 0;
} */
 
/* printf와 sprintf 차이
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char buf[40];
	int v = 25;
	double x = 3.14;

	sprintf(buf, "v=%3d, x=%5.2f\n", v, x);
	printf("v=%3d, x=%5.2f\n", v, x);
	puts(buf);

	return 0;
} */

/* 문자열 길이 계산 함수 
#include <stdio.h>
#include <string.h>

int my_strlen(char *st)
{
	int n = 0;
	while (*st++ != '\n')
		n++;
	return n;
}

int main(void)
{
	char s[] = "swimming";
	char *t = "야구";

	printf("문자열 s의 길이: %d\n", strlen(s));
	printf("문자열 t의 길이: %d\n", strlen(t));

	return 0;
}*/

/* 대소문자 변환
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch1 = 'E', ch2 = 'h';

	printf("%c \n", ch1 + 32);
	printf("%c \n", ch1 - 32);
	printf("%c \n", tolower(ch1));
	printf("%c \n", toupper(ch2));

	return 0;
} */
/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void upper_to_lower(char str[])
{
	int i, length;
	length = strlen(str);
	for (i = 0; i < length; i++)
		str[i] = tolower(str[i]);
}

int main(void)
{
	char test[10] = "12AbCdEf";

	upper_to_lower(test);
	printf('%s\n', test);
	
	return 0;
} */
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s1 = "47476";
	char *s2 = "98765432";
	char *s3 = "3456.7634";

	int num1;
	long num2;
	double num3;

	num1 = atoi(s1);
	num2 = atol(s2);
	num3 = atof(s3);

	printf("문자열: %s, int형 숫자: %d\n", s1, num1);
	printf("문자열: %s, long형 숫자: %ld\n", s2, num2);
	printf("문자열: %s, double형 숫자: %f\n", s3, num3);

	return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	int num1 = 14;
	long num2 = 512;
	char s[25];
	itoa(num1, s, 2);
	printf("정수 : %d, 2진수 문자열 : %s\n", num1, s);
	itoa(num2, s, 16);
	printf("정수 : %ld, 16진수 문자열 : %s\n", num2, s);
}