/*#include <stdio.h>

void print_matrix(int m[][3], int row_size, int col_size);

int main(void)
{
	int ma[][3] = { 3,6,4,1,7,5,2,9 };
	print_matrix(ma, 3, 3);

	return 0;
}

void print_matrix(int m[][3], int row_size, int col_size)
{
	int i,j;
	for (i = 0; i < row_size; i++) {
		for (j = 0; j < col_size; j++)
			printf("%2d ", m[i][j]);
	}
	printf("\n");
}*/
/*
#include <stdio.h>

//void add_matrix(int a[][3], int b[][3], int sum[][3], int row);
//void sub_matrix(int a[][3], int b[][3], int sub[][3], int row);
void mul_matrix(int m[][3], int m2[][3], int m3[][3], int row);
void print_matrix(int m[][3], int row_size, int col_size);


int main(void)
{
	int ma[3][3] = { {3,8,6},{4,5,7},{1,2,3} };
	int mb[3][3] = { {1,5,6},{2,3,4},{9,8,7} };
	int sum[3][3] = { 0 };
	int sub[3][3] = { 0 };
	int mul[3][3] = { 0 };

	printf("青纺 ma\n");
	print_matrix(ma, 3, 3);
	printf("青纺 mb\n");
	print_matrix(mb, 3, 3);
	printf("青纺 sum\n");
	add_matrix(ma, mb, sum, 3);
	print_matrix(sum, 3, 3);
	printf("青纺 sub\n");
	sub_matrix(ma, mb, sub, 3);
	print_matrix(sub, 3, 3);
	printf("青纺 mul\n");
	mul_matrix(ma, mb, mul, 3);
	print_matrix(mul, 3, 3);

	return 0;
}

/*void add_matrix(int a[][3], int b[][3], int sum[][3], int row)
{
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < row; j++)
			sum[i][j] = a[i][j] + b[i][j];
}

void sub_matrix(int a[][3], int b[][3], int sub[][3], int row)
{
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < row; j++)
			sub[i][j] = a[i][j] - b[i][j];
}

void mul_matrix(int m[][3], int m2[][3], int m3[][3], int row)
{
	int r, c, k;
	for (r = 0; r < row; r += 1)
		for (c = 0; c < row; c += 1) {
			m3[r][c] = 0;
			for (k = 0; k < row; k += 1)
				m3[r][c] += m[r][k] * m2[k][c];
		}
}

void print_matrix(int ma[][3], int row_size, int col_size)
{
	int i, j;
	for (i = 0; i < row_size; i++) {
		for (j = 0; j < col_size; j++)
			printf("%2d ", ma[i][j]);
	}
	printf("\n");
}*/
/*
#include <stdio.h>

void print_matrix(int m[][3], int row_size, int col_size);
void rotation_left(int m[][3]);
void rotation_right(int m[][3]);

int main(void)
{
	int ma[][3] = { 3,6,4,1,7,5,2,9 };
	print_matrix(ma, 3, 3);
	rotation_left(ma);
	print_matrix(ma, 3, 3);
	rotation_right(ma);
	print_matrix(ma, 3, 3);

	return 0;
}

void print_matrix(int m[][3], int row_size, int col_size)
{
	int i, j;
	for (i = 0; i < row_size; i++) {
		for (j = 0; j < col_size; j++)
			printf("%2d ", m[i][j]);
	}
	printf("\n");
}

void rotation_left(int m[][3])
{
	int i, j;
	int temp[3][3];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			temp[2 - j][i] = m[i][j];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			m[i][j] = temp[i][j];
}

void rotation_right(int m[][3])
{
	int i, j;
	int temp[3][3];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			temp[j][2-i] = m[i][j];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			m[i][j] = temp[i][j];
}*/

#include <stdio.h>

void print_matrix(int m[][3], int row_size, int col_size);
void symmetric_matrix(int m[][3]);

int main(void)
{
	int ma[][3] = { 3,6,4,1,7,5,2,9 };
	print_matrix(ma, 3, 3);
	rotation_left(ma);
	print_matrix(ma, 3, 3);
	rotation_right(ma);
	print_matrix(ma, 3, 3);

	return 0;
}

void print_matrix(int m[][3], int row_size, int col_size)
{
	int i, j;
	for (i = 0; i < row_size; i++) {
		for (j = 0; j < col_size; j++)
			printf("%2d ", m[i][j]);
	}
	printf("\n");
}