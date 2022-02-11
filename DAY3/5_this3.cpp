// 5_this1 - 126page
#include <iostream>
class Point
{
	int x, y;
public:
	// 1. non-static 멤버 함수는 this가 추가되는 것
	void set(int a, int b) // void set(Point* this, int a, int b) <= this추가
	{
		x = a;
		y = b;
		std::cout << this << std::endl;
	}
	// 2. static 멤버 함수는 this가 추가되지 않는 것(객체없이 호출가능하므로)
	static void foo(int a) // void foo(int a) 즉, 컴파일 되어도 this 추가 안됩니다.
	{
		std::cout << this << std::endl; // 될까요 ?? 잘 판단해 보세요
									    // error
	}
};
int main()
{
	Point p1;
	p1.set(10, 20); // set(&p1, 10, 20)  => this가 있는 추가되는 함수 

	Point::foo(10); // 객체 없이 호출가능..즉 컴파일되어도 아래처럼 됩니다.
				    // foo(10)		=> this가 추가될수 없는 함수
				
}




