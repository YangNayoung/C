/*#include <stdio.h>

#define MESSAGE "�н��� �Ϲݾ���� ������ \ ���� �ݺ��н��� �߿��ϴ�"
#define SQUARE(x)  ( (x) * (x) )
#define CUBE(x)  ( SQUARE(x) * (x) )
#define MULT(x,y)  ( (x) * (y) )
int main(void)
{
     printf("�Ǽ� ������ %.2f �Դϴ�.\n", SQUARE(4.25));
     printf("�Ǽ� CUBE�� %.2f �Դϴ�.\n", CUBE(4.25));
     printf(" �� �Ǽ� ���� %.2f�Դϴ�", MULT(2.78, 3.62));
     puts(MESSAGE);
	 
     return 0;
}*/

#include <stdio.h>

#define myprint(x) printf(x);\
puts("")

int main(void)
{
	myprint("��ũ�η� ����ϱ�");
	printf("����Լ��� ����ϱ�\n");

	return 0;

}