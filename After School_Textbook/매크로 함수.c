#include <stdioh>
#define TEST(x) if(x<0)\
					printf("�����Դϴ�.");\
				else if(x>0)\
					printf("����Դϴ�.");\
				else\
					printf("0 �Դϴ�.");\
void main(){
	TEST(10);
}