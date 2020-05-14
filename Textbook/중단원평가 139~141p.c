
/* 2번
#include <stdio.h>
int main()
{
	int a, y = 0;
	for (a = 1;a < 10;a = a + 2)
		y = y + a;
	printf("%d\n", y);
}
*/
/* 3번
#include <stdio.h>
int main()
{
	int i;
	for (i = 1;i < 11;i++) {
		if (i % 2 == 0) continue;
		printf("%d", i);
	}
}
*/
/* 4번
#include <stdio.h>
int main()
{
	int m, n, k = 0;
	for (m = 1;m <= 3;m++)
		for (n = 1;n <= 3;n++)
			if (m + n <= 3)
				k = k + m + n;
	printf("k= %d", k); // k = 8
}
*/
/* 5번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 1, b = 1, k = 0, n;
	scanf("%d", &n);
	while (k < n) {
		a = a + b;
		b = a - b;
		k = k + 1;
	}
	printf("%d %d\n", a, b);
}
*/
/* 6번
#include <stdio.h>
int main()
{
	int a;
	for (a = 1;a <= 20;a++)
		if (!(a % 3))
			printf("%3d", a);
}
*/
/* 7번
#include <stdio.h>
int main()
{
	int a, b, c = 1;
	for (a = 1;a <= 3;a++)
		for (b = 1;b <= a;b++)
			c = c + b;
	printf("%d", c);
}
*/
/* 8번
#include <stdio.h>
int main()
{
	int a, b = 4;
	a = (b > 0) ? -b : b;
	printf("a=%d", a);
}
*/
/* 9번
#include <stdio.h>
int main()
{
	int a, b;
	for (a = 0, b = 1;b <= 10;) {
		b += 2;
		a += b;
	}
	printf("%d", a);
}
*/
#include <stdio.h>
int main()
{
	int c[4] = { 11,8,15,7 };
}