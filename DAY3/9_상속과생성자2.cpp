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
	Base() {  }
	Base(int a) {  }
	~Base() { }
};
class Derived : public Base
{
	int data2;
public:
	// 사용자가 만든 코드			// 컴파일러가 변경한 코드
	Derived()		{ }			// Derived()      : Base() {}	
	Derived(int a)	{ }			// Derived(int a) : Base() {}			
	~Derived()		{ }			// ~Derived()	  { ....; ~Base(); }	
};
int main()
{
	Derived d1;		// call Derived::Derived()    호출
	Derived d2(5);  // call Derived::Derived(int) 호출 
}