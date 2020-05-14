#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	// 1,2
	int a[5] = { 0, }, *ptr;
	ptr = a;

	char aa[] = "Seoul", *p = "Pusan";


	printf("%p\n", a);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);
	printf("%p\n", ptr + 1);
	printf("%d\n", *(ptr + 1));
	printf("%d\n", a[1]);

	printf("\n%s\n", aa);
	printf("%s\n", p);

	//strcpy(p, "Newyork");//¾ÈµÊ

	//printf("%s\n", p);
	//aa = { "Newyork" };
	//p = "jeju";
	//strcpy(p, "Pusan");

	aa[1] = 'E';
	*(aa + 2) = 'O';
	//*(p + 1) = 'U';
	//p[2]='S';
	printf("\n%s\n", aa);
	printf("%s\n", p);

	// 3
	int A[5] = { 1,2,3,4,5 };
	printf("%d %d\n", *A, A[0]);
	int B[2][3] = { 10,20,30,40,50,60, };
	printf("%d %d %d\n", **B, *B[0], B[0][0]);
	int C[2][3][4] = { 0 };
	printf("%d %d %d %d\n", ***C, **C[0], *C[0][0], C[0][0][0]);

	return 0;
}