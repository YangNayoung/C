/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *ifp, *ofp;
	char ch;

	ifp = fopen("twinkle1.txt", "r");
	ofp = fopen("twinkle.txt", "w");

	if (ifp == NULL) {
		printf("파일개방실패\n");
		return 1;
	}
	if (ofp == NULL) {
		printf("파일개방실패\n");
		return 1;
	}

	while (1) {
		ch = fgetc(ifp);
		if (ch == EOF) break;
		{ 
			putchar(ch);
			fputc(ch, ofp);
		}
	}
	fclose(ifp);
	fclose(ofp);

	return 0;
} */
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	FILE *ifp, *ofp;
	char str[80];
	char *res;

	ifp = fopen("twinkle.txt", "r");
	ofp = fopen("twinkle1.txt", "w");

	if (ifp == NULL) {
		printf("파일개방실패\n");
		return 1;
	}
	if (ofp == NULL) {
		printf("파일개방실패\n");
		return 1;
	}

	while (1) {
		res = fgets(str, sizeof(str), ifp);
		if (res == NULL) break;
		str[strlen(str) - 1] = '\0';
		fputc(str, ofp);
		fputs("", ofp);
		puts(str);
	}

	fclose(ifp);
	fclose(ofp);

	return 0;
} */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	FILE *ifp, *ofp;
	char name[20];
	int age;
	double height;
	int res;

	ifp = fopen("a.txt", "r");
	ofp = fopen("b.txt", "w");

	if (ifp == NULL) {
		printf("파일개방실패\n");
		return 1;
	}
	if (ofp == NULL) {
		printf("파일개방실패\n");
		return 1;
	}

	while (1) {
		res = fscanf(ifp, "%s%d%lf", name, &age, &height);
		if (res == EOF) break;
		fprintf(ofp, "%.1f%d%s\n", height, age, name);
	}

	fclose(ifp);
	fclose(ofp);

	return 0;
} 