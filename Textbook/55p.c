// 2018.04.16

#include <stdio.h>

int func1(int x, int y);
int func2(int z)
{

}
void main()
{
	int a, b, c;
	func1(a, b); // func1 호출
	func2(c);   //  func2 호출
}

int func1(int x, int y) // main() 위에 있어야함  func들이
{

}
