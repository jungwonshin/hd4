// 3_nullptr2
#include <iostream>

void foo(int   n) { std::cout << "int"   << std::endl; } // 1
void foo(char* n) { std::cout << "char*" << std::endl; } // 2

int main()
{
	foo(0); // 0�� ����(int) �̹Ƿ� "foo(int)"
	foo((char*)0); // foo(char*)

	foo(nullptr);  // ������ 0 ����

}
