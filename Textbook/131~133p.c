#include <stdio.h>

/* int main()
{
	int i, sum = 0;
	for (i = 1;i <= 5;i++) {
		sum += i;
		if (sum >= 10) break; 
	}
	printf("i=%d, sum=%d\n", i, sum); // i = 4, sum = 10
	return 0;
}
*/ 

/* int main()
{
	int i, sum = 0;
	for (i = 1;i <= 5;i++) {
		sum += i;
		if (sum >= 10) continue;
	}
	printf("i=%d, sum=%d\n", i, sum); // i = 6, sum = 15
	return 0;
}
*/

/* int main()
{
	int i, sum = 0;
	for (i = 1;i <= 5;i++) {
		if (sum >= 10) break;
		sum += i;
	}
	printf("i=%d, sum=%d\n", i, sum); // i = 5, sum = 10
	return 0;
}
*/ 

/* int main()
{
   int i, sum = 0;
   for (i = 1;i <= 5;i++) {
	   if (sum >= 10) continue;
	   sum += i;
   }
   printf("i=%d, sum=%d\n", i, sum); // i = 6, sum = 10
   return 0;
}
*/

/* int main()
{
	for (int a = 1;a <= 10;a++) {
		if (a % 5 == 0) continue;
		printf("%3d",a); // 1 2 3 4 6 7 8 9
	}
	printf("\n");
	return 0;
}
*/

int main()
{
	for (int a = 1;a <= 10;a++) {
		if (a % 5 == 0) break;
		printf("%3d", a); // 1 2 3 4
	}
	printf("\n");
	return 0;
}