// 9_상속과생성자1 - 중요!!

#include <iostream>
// Derived 객체를 생성하면
// 1. Base 생성자가 먼저 호출되고, Derived 생성자 호출
// 2. Base 생성자는 항상 인자가 없는 디폴트 버전 호출
// 3. 소멸자는 반대로!!

// 그런데, 정확한 원리를 알아야 합니다.

class Base
{
	int data;
public:
	Base()      { std::cout << "Base()"    << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()"   << std::endl; }
};
class Derived : public Base
{
	int data2;
public:
	Derived()      { std::cout << "Derived()" << std::endl; }
	Derived(int a) { std::cout << "Derived(int)" << std::endl; }
	~Derived()     { std::cout << "~Derived()" << std::endl; }
};
int main()
{
//	Derived d1; // 실행결과 예측해 보세요.
	Derived d2(5);
}