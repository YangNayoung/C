#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fi; // 입력파일
	FILE *fo; // 출력파일
	// int id;
	// char c;
	char buf[100];

	fi = fopen("ex).c", "r");

	fo = fopen("D:out.txt", "a"); // 상대주소
	// scanf("%d", &id);

	if (fi == NULL) {
		printf("입력파일 오픈 실패");
		return 0;
	}
	
	/*while ((c=fgetc(fi))!=EOF) 
	{
		fputc(c, fo);
		putchar(c);
	}*/

	while (fgets(buf, 100, fi) != NULL) 
	{
		fputs(buf, fo);
	}

	// printf("%d\n", id);
	// fprintf(fo,"%d\n", id); 
	fclose(fi);
	fclose(fo);

	return 0;
}