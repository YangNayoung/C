#include <stdio.h>

/* call by value 
void swap(int x, int y);
void main()
{
	int a = 100, b = 500;
	printf("�����α׷� swap() �Լ� ȣ�� �� a=%d, b=%d\n", a, b); // 100 ,500
	swap(a, b);
	printf("�����α׷� swap() �Լ� ȣ�� �� a=%d, b=%d\n", a, b);  // 100, 500
}
void swap(int x, int y) {
	int temp;
	printf("�����α׷� swap() �Լ� ���� a=%d, b=%d\n", x, y); // 500, 100
	temp = x; 
	x = y;
	y = temp;
	printf("�����α׷� swap() �Լ� �� a=%d, b=%d\n", x, y); // 100. 500
} */

void swap(int *ptr_x, int *ptr_y);
void main(void)
{
	int a = 100, b = 500;
	printf("�����α׷� swap() �Լ� ȣ�� �� =%d, b=%d\n", a, b); // 100 ,500
	swap(&a, &b);
	printf("�����α׷� swap() �Լ� ȣ�� �� =%d, b=%d\n", a, b);  // 100, 500
}
void swap(int x, int y) {
	int temp;
	printf("�����α׷� swap() �Լ� ���� =%d, b=%d\n", *ptr_x, *ptr_y); // 500, 100
	temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;
	printf("�����α׷� swap() �Լ� �� =%d, b=%d\n", *ptr_x, *ptr_y); // 100. 500
}