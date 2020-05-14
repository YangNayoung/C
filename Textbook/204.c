#include <stdio.h>

/* call by value 
void swap(int x, int y);
void main()
{
	int a = 100, b = 500;
	printf("주프로그램 swap() 함수 호출 전 a=%d, b=%d\n", a, b); // 100 ,500
	swap(a, b);
	printf("주프로그램 swap() 함수 호출 후 a=%d, b=%d\n", a, b);  // 100, 500
}
void swap(int x, int y) {
	int temp;
	printf("부프로그램 swap() 함수 시작 a=%d, b=%d\n", x, y); // 500, 100
	temp = x; 
	x = y;
	y = temp;
	printf("부프로그램 swap() 함수 끝 a=%d, b=%d\n", x, y); // 100. 500
} */

void swap(int *ptr_x, int *ptr_y);
void main(void)
{
	int a = 100, b = 500;
	printf("주프로그램 swap() 함수 호출 전 =%d, b=%d\n", a, b); // 100 ,500
	swap(&a, &b);
	printf("주프로그램 swap() 함수 호출 후 =%d, b=%d\n", a, b);  // 100, 500
}
void swap(int x, int y) {
	int temp;
	printf("부프로그램 swap() 함수 시작 =%d, b=%d\n", *ptr_x, *ptr_y); // 500, 100
	temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;
	printf("부프로그램 swap() 함수 끝 =%d, b=%d\n", *ptr_x, *ptr_y); // 100. 500
}