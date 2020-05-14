#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void  *substitution_cipher(int shift, char text[])
{
	char *cipher[41] = { '\n' };
	int i, length;
	length = strlen(text);
	*cipher = (char *)(malloc(length));
	printf("\n암호\n");
	printf("평문 : %s\n", text);

	for (i = 0; i < length; i += 1)
		cipher[i] = ((text[i] - 'a') + shift) % 26;

	for (i = 0; i < length; i += 1)
		cipher[i] = toupper(*cipher[i] + 'a');

	cipher[length - 1] = '\n';
	printf("암호문 : %s\n\n", cipher);
}

 void decryption(int shift, char cipher[])
 {
	 char text[41] = { '\n' };
	 int i, length;
	 length = strlen(cipher);

	 for (i = 0; i < length; i += 1)
		 text[i] = ((cipher[i] - 'A') - shift + 26) % 26 + 'a';

	 printf("복원문 : %s\n", text);
 }

int main(void)
{
	char line[40] = "yesterday";
	int shift = 3;
	substitution_cipher(shift, line);

	return 0;
}