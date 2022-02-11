// 2_static_member_function1
#include <iostream>

class Car
{
	int color;		
	static int cnt; 
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int getCount() { return cnt; } // 객체가 있어야만 호출가능
	
	static int getCount() { return cnt; } // 객체가 없어도 호출 가능한 함수
										  // "클래스이름::함수이름" 으로 호출
};
int Car::cnt = 0;

int main()
{
	// 여기서 자동차의 갯수를 알고 싶다 ???
	// => Car::cnt 는 객체가 없어도 메모리에 있으므로 읽어 올수있어야 한다.
	std::cout << Car::getCount() << std::endl; // 0 

	Car c1;
	Car c2;

//	std::cout << Car::cnt << std::endl; // error. private 멤버
	std::cout << c1.getCount() << std::endl; // ok. 하지만 아래 코드가 좋습니다.
	std::cout << Car::getCount() << std::endl; // "클래스이름::함수이름" 으로 사용하세요
}
