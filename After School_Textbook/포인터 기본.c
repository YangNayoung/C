/*
 #include <stdio.h>

 void main() {
	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int * arr[5] = { &a,&b,&c,&d,&e };
	int i;

	for (i = 0; i < 5; i++)
	printf("%d ", *arr[i]);
	printf("\n%p", arr[i]);
	printf("\n");
	}
 }*/
#include <stdio.h>

void main() {
	int x[3] = { 1,2,3 };
	int y[3] = { 4,5,6 };
	int z[3] = { 7,8,9 };
	int* arr[3] = { x,y,z };
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
