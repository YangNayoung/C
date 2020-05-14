#include <stdio.h>

void main()
{
	int i;
	char *name[] = { "kimsuchul","leeyongsu","kimdongsu","bakgicheal",
	"kimyongsuk","choigiwha","leesunhae","chebeangsuk","songdalsu","hajongslk" };

	printf("kimsuchul, leeyongsu, kimdongsu, bakgicheal, kimyongsuk \n");
	printf("choigiwha, leesunhae, chebeangsuk, songdalsu, hajongslk \n\n");

	printf(" k로 시작하는 이름은 ");
	for (i = 0; i < 9; i++) {
		if (name[i][0] == 'k')
			printf(" %12s", name[i]);
	}

	printf("\n k가 들어가는 이름은 ");
	for (i = 0; i < 9; i++) {
		for (int j = 0; j < 12; j++) {
			if (name[i][j] == 'k') {
				printf(" %12s", name[i]);
				break;
			}
		}
	}
	printf("\n이상입니다.\n");

}