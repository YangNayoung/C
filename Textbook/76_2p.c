#include <stdio.h>

void main() 
{
	int m, n, k;
	m = 58, n = 16, k = 0;

	do {

		k = m % n;
		m = n;
		n = k;

		printf("%d %d %d\n", m, n, k);

	} while (k != 0);

	printf("%d\n", m);

	// printf("%d %d %d", m, n, k);
}