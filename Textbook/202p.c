#include <stdio.h>

void main()
{
	int i;
	char *aaa[3] = { "korea","computer","school" };
	for (i = 0; i < 3; i++) {
		printf("aaa[%d] data = %s\n", i, aaa[i]);
		printf("aaa[%d] data = %0\n", i, aaa[i]);
		printf("aaa[%d] data = %p\n\n", i, aaa[i]);
	}
	char a[] = "korea";
	printf("%d %d\n\n", sizeof(a), strlen(a));

	int aaa2[3];
	int aaa3[3];
	int *ppp = aaa2;

	ppp = aaa3;
	ppp++;
	
}