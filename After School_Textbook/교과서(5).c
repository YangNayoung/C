// 445p. 13번
#include <stdio.h> 

int main(void) 
{ 
	int ar1[4][3] = { {46, 79, 78}, 
                      {35, 57, 28},
                      {43, 68, 76}, 
                      {56, 78, 98} }; 
	int ar2[4][3] = { {78, 35, 99},
                      {85, 82, 34},
                      {58, 69, 29},
	                  {34, 59, 35} };

	int i, j;

	printf("-----------------------\n");
	printf("\t원래 값 A\n");
	printf("-----------------------\n");
	for (i = 0; i<4; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%d\t", ar1[i][j]);
		}
		printf("\n");
	}

	printf("-----------------------\n");
	printf("\t원래 값 B\n");
	printf("-----------------------\n");
	for (i = 0; i<4; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%d\t", ar2[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------\n");
	printf("\n");

	printf("-----------------------\n");
	printf("\t합\n"); 
	printf("-----------------------\n");
	for(i=0; i<4; i++)
	{ 
		for(j=0; j<3; j++) 
		{ 
			printf("%d\t", ar1[i][j] + ar2[i][j] );
		} 
		printf("\n"); 
	}
	printf("-----------------------\n");

	printf("-----------------------\n");
	printf("\t차\n"); 
	printf("-----------------------\n");
	for(i=0; i<4; i++) 
	{ 
		for( j=0; j<3; j++) 
		{
			printf("%d\t", ar1[i][j] - ar2[i][j] ); 
		}
		printf("\n"); 
	} 
	printf("-----------------------\n");

	return 0; 
}
