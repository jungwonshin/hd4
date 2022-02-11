// 5_this1 - 126page
#include <iostream>

class Point
{
	int x, y;
public:
	// this 활용 1. 멤버데이타 접근을 명확히 표기하고 싶을때
	void set(int x, int y) 
	{
		this->x = x; // "this->x" 는 멤버 데이타임을 나타내기 위해 사용
		this->y = y;
	}
	// this 활용 2. this를 반환하는 함수.
	Point* foo() { return this; }
	Point  goo() { return *this; }
};
int main()
{
	Point p1;
	p1.set(10, 20); 

	// 멤버 함수가 this를 반환 하면 멤버함수호출을 연속적으로 할수 있습니다.
	p1.foo()->foo()->foo()->foo();
	// (&p1)->foo()
	p1.goo().goo().goo().goo();
}




