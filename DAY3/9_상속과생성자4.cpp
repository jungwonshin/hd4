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
	// 기반 클래스에 디폴트 생성자가 없는 경우, 반드시 아래처럼 사용자가 직접
	// 다른 버전의 생성자를 호출해야 합니다. => 이 부분을 많은 C++개발자가 어려워 합니다.
	Derived()	   : Base(0) { }
	Derived(int a) : Base(a) { }
	~Derived() { }			
};
int main()
{
	Derived d1;		
	Derived d2(5);  
}