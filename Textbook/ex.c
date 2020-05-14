#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void scanData(int n, double *pp) { // 타입 일치, 값 받음. 입력 함수 정의 
	for (int i = 0; i < n; i++) {
		// scanf("%d", (pp + i));
		scanf("%lf", &pp[i]);
	}
}
void printData(int num, double *p) { // 타입 일치, 값 받음. 출력 함수 정의
	for (int i = 0; i < num; i++)
		// printf("%d ", *(p + i));
		printf("%lf %p\n", p[i], p + i); // 값, 주소 
}
void main()
{
	// int a[10];
	double *p = 0; // 포인터를 0(NULL)으로 주는 이유-> 포인터에 쓰레기 값이 들어가지 않기 위해
	// p = &a;
	int num;

	printf("입력할 테이터 갯수 : ");
	scanf("%d", &num);
	p = (double *)malloc(sizeof(double)*num); // 타입 일치
	scanData(num,p); // 값을 넘겨준다. 함수 사용
	printData(num,p); // 값을 넘겨준다. 함수 사용
	printf("\n");
	free(p); // malloc과 짝궁! 안 쓰면 malloc이 메모리 계속 잡아먹음.  free는 해제 해준다.

	// 배열 이용
	/* for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	// 포인터 이용
	for (int i = 0; i < 10; i++) {
		scanf("%d", (p + i));
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", *(p + i));
	printf("\n"); */
}