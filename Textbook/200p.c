#include<stdio.h>

void main()
{
	char aa[6] = "KOREA";
	char *p;
	int i;
	p = &aa[0];

	printf("p = %x\n", &aa[0]);
	printf("&p = %x\n", &p);
	printf("*p = %c\n", *p);
	printf("p = %x\n", p);
	printf("p = %s\n\n", p); // 배열의 이름을 쓰면 문자열이 다 나오는 것과 같은 것

	for (i = 0; i <= 4; i++)
		printf("aa[%d] = %c, 주소는 %p\n\n", i, *(p + i), &aa[i]);

	for (i = 0; i <= 4; i++) {
		printf("aa[%d]=%c, 주소는 %p \n", i, *(p + i), &aa[i]);
		printf("aa[%d]=%c, 주소는 %p \n", i, aa[i], p + i);
		printf("aa[%d]=%c, 주소는 %p \n", i, *(aa + i), &p[i]);
		printf("aa[%d]=%c, 주소는 %p \n", i, p[i], aa + i);
	}
}