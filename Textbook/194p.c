// 모든 포인터는 4byte
#include <stdio.h>

int main(void)
{
	char *c;
	short *s;
	int *i;
	float *f;
	double *d;
	printf("char *메모리의 크기 %dbyte 시작 주소 : %x \n", sizeof(c), &c);
	printf("short *메모리의 크기 %dbyte 시작 주소 : %x \n", sizeof(s), &s);
	printf("int *메모리의 크기 %dbyte 시작 주소 : %x \n", sizeof(i), &i);
	printf("float *메모리의 크기 %dbyte 시작 주소 : %x \n", sizeof(f), &f);
	printf("double *메모리의 크기 %dbyte 시작 주소 : %x \n", sizeof(d), &d);
}
