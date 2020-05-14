#include <stdioh>
#define TEST(x) if(x<0)\
					printf("음수입니다.");\
				else if(x>0)\
					printf("양수입니다.");\
				else\
					printf("0 입니다.");\
void main(){
	TEST(10);
}