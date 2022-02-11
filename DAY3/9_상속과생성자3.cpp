#include <iostream>

class Base
{
	int data;
public:
//	Base() {  }
	Base(int a) {  }
	~Base() { }
};
class Derived : public Base
{
	int data2;
public:
	// Base 에 디폴트 생성자가 없으면 아래와 같이 
	// 컴파일러가 만든 코드 때문에 에러가 발생합니다.
	// 사용자가 만든 코드		// 컴파일러가 변경한 코드
	Derived() { }			// Derived()      : Base() {}	
	Derived(int a) { }		// Derived(int a) : Base() {}			
	~Derived() { }			// ~Derived()	  { ....; ~Base(); }	
};
int main()
{
	Derived d1;		// call Derived::Derived()    호출
	Derived d2(5);  // call Derived::Derived(int) 호출 
}