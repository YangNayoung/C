#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	/*for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%d * %d = %2d  ", j, i, i*j);
		}
		printf("\n");
	}*/

	/*for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 3; j++) {
			printf("@");
		}
		printf("\n");
	}*/

	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%c", 64+i);
		}
		printf("\n");
	}

}