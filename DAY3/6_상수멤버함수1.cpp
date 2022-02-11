// 6_상수멤버함수1
#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b) 
	{					   
		x = a;			   
		y = b;			   
	}

	// 상수 멤버 함수(const member function)
	// 멤버 함수 () 뒤에 const를 붙이는 문법
	// 1. 해당 멤버 함수에서는 멤버데이타를 수정할수 없다.
	// 2. 상수객체라도 상수 멤버 함수는 호출할수 있다.
	void print() const 
	{
//		x = 10; // error
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point p(1, 2);
	// 아래 3줄 생각해 보세요
	p.x = 10;     // error. public 에 있지만 상수 객체이므로
	p.set(10, 20);// error. 상수객체 이므로 x, y 변경할수 없다!!
	p.print();    // error
				// 컴파일러는 멤버 함수의 선언만 보게 됩니다.
				// 그래서, 멤버함수에서 "데이타를 수정하는지 알수 없습니다."
				// 따라서, 상수객체일때는 멤버 함수를 호출할수 없습니다.
				// 단, print() 가 상수 멤버함수 라면 에러 아님.
	// "상수객체는 상수 멤버 함수만 호출가능하다."
}


