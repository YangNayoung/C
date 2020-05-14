// 알파벳을 입력하여 대문자가 입력되면 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char Ee;
	printf("임의 문자 입력 : ");
	scanf("%c", &Ee);
	// 대문자 65~90
	if (Ee >= 65 && Ee <= 90) {
		for (char i = 'A'; i <= Ee; i++){
			for (char j = 'A'; j <= Ee; j++) {
				if (i == j)
					printf("%c", i);
				else
					printf("#");
			}
			printf("\n");
		}
	}
	// 소문자 97~122
	if (Ee >= 97 && Ee <= 122) {
		for (char i = 'a'; i <= Ee; i++) {
			for (char j = 'a'; j <= Ee; j++) {
				if (i == j)
					printf("%c", i);
				else
					printf("#");
			}
			printf("\n");
		}
	}
}