// ���ĺ��� �Է��Ͽ� �빮�ڰ� �ԷµǸ� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char Ee;
	printf("���� ���� �Է� : ");
	scanf("%c", &Ee);
	// �빮�� 65~90
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
	// �ҹ��� 97~122
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