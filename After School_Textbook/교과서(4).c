#include <stdio.h>
/*
int main()
{
	double degree[] = { -5.34,3.67,19.76,28.76,35.63 };
	int size = sizeof(degree) / sizeof(degree[0]);

	for (int i = 0; i < size; i++)
		printf("%.2f", degree[i]);

	puts("");

	return 0;
}
*/
/*
int main()
{
	int data[] = { 3,21,35,57,24,82,8 };
	int inc = 10;

	int size = sizeof(data) / sizeof(int);
	
	for (int i = 0; i < size; i++) {
		data[i] = data[i] + inc;
	}

	for (int i = 0; i < size; i++) {
		printf("  %d", data[i]);
	}
	return 0;
}
*/
/*
int main()
{
	int a[] = { 32,56,7,8,24 };
	int b[] = { 3,21,35,57,24,82,8 };
	int c[70];

	int sizeA = sizeof(a) / sizeof(a[0]);
	int sizeB = sizeof(b) / sizeof(b[0]);
	
	for (int i = 0; i < sizeA; i++) 
		c[i] = a[i];
	for (int i = sizeA; i < sizeB+sizeA; i++)
		c[i] = b[i-sizeA];
	for (int i = 0; i < sizeA+sizeB; i++)
		printf("%d  ", c[i]);

	puts("");

	return 0;
}
*/
char name
int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("%10s", name[i]);
		sum = 0;
		for (int j = 0; j < 4; j++)
			sum += point[i][j];
		printf("%6d", point[i][j]);
	}
	printf("%8d", sum);
	printf("%8.2f\n", (double)sum / 4);
}
	return 0;
}