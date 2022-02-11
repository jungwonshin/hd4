// 10_Upcasing1  - 객체지향 디자인의 첫걸음..!
#include <iostream>

class Animal
{
	int age;
public:
	void cry() {}
};
class Dog : public Animal
{
	int color;
public:
	void setColor(int c) { color = c; }
};
int main()
{
	Dog dog;
	// 아래 3줄 생각해 보세요..
	Dog*    p1 = &dog; // ok
//	int*    p2 = &dog; // error
	Animal* p3 = &dog; // ok
	
	// 핵심 1. 기반 클래스 타입의 포인터에
	//		   파생 클래스 객체의 주소를 담을수 있다.
	Animal* p = &dog;

	// 핵심 2. 그런데, Animal* p 로는 Animal로 부터 물려받은것만 접근 가능하다.
	p->cry();       // ok
	p->setColor(c); // error
				    // 컴파일러는 p가 가리키는 곳이 Animal 이라고만 생각하므로

	// 핵심 3. Animal* p로 Dog의 고유 멤버 접근하려면 캐스팅 필요
	((Dog*)p)->setColor(10); // ok

	static_cast<Dog*>(p)->setColor(10); // C++ 스타일

}



