/* #include <stdio.h>

void main()
{
	int a[5] = { 1,2,3,4,5 };

	printf("%3d %3d %3d %3d", a[0], a[1], a[2], a[3]);
	printf("\n");
} */

#include <stdio.h>

void main()
{
	int a[5];
	for (int i = 0; i <= 4; i++)
		printf("%3d", a[i]);
	printf("\n");
}