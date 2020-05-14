/*  완성형 한글
#include <stdio.h>

int main(void)
{
	char hangul[3] = "가";
	unsigned char code;
	code = hangul[0];
	printf("%x %d\n", code, code);
	code = hangul[1];
	printf("%x %d\n", code, code);
	return 0;
} */

/* 확장형 완성 한글
#include <stdio.h>

int main(void)
{
	unsigned char b1 = 0xb0;
	unsigned char b2 = 0xa1;

	unsigned char a1 = 200;
	unsigned char a2 = 254;

	printf("%c%c\n", b1, b2);
	printf("%c%c\n", a1, a2);

	return 0;
}*/
/*
#include <stdio.h>

int main(void)
{
	unsigned char b1 = 0xb0;
	unsigned char b2;

	for (b2 = 0xa1; b2 <= 0xfe; b2++) {
		printf("%c%c%2x%2x ", b1, b2, b1, b2);
		if (b2 %10 == 0)
			printf("\n");
	}
	printf("\n");
	return 0;
}*/
