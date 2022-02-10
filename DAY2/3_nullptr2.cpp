// 3_nullptr2
#include <iostream>

void foo(int   n) { std::cout << "int"   << std::endl; } // 1
void foo(char* n) { std::cout << "char*" << std::endl; } // 2

int main()
{
	foo(0); // 0은 정수(int) 이므로 "foo(int)"
	foo((char*)0); // foo(char*)

	foo(nullptr);  // 포인터 0 전달

}
