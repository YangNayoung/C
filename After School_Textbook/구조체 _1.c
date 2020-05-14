/*
#include <stdio.h>

union data {
	unsigned long dword;
	unsigned char aa[4];
};

void main() {
	union data d1;
	int i;

	printf("data 공용체의 크기 : %d\n", sizeof(union data));

	d1.dword = 0x12345678;
	printf("d1.dword = %08x\n", d1.dword);
	for (i = 0; i < 4; i++)
		printf("d1.aa[%d] = %02x\n", i, d1.aa[i]);
} */

#include <stdio.h>

union student {
	int num;
	double grade;
};

void main() {
	union student s1 = { 315 };
	printf("학번 : %d\n", s1.num);
	s1.grade = 4.4;
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);

}