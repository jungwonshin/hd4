// 5_this1 - 126page
#include <iostream>
// 1. 객체 생성시 멤버 데이타만 객체당 한개씩 생성됩니다
// 2. 멤버 함수는 코드메모리에 한개만 있습니다.
class Point
{
	int x, y;
public:
	// 멤버 함수는 결국, 컴파일 되면 
	// 1번째 인자로 객체의 주소를 받을수 있게 변경되는 것입니다.
	void set(int a, int b) // void set(Point* this, int a, int b)
	{					   //
		x = a;			   // this->x = a;
		y = b;			   // this->y = b; 라고 변경된것 입니다.
	}
};
int main()
{
	Point p1;
	Point p2;

	p1.set(10, 20); // set(&p1, 10, 20) 처럼 컴파일러가 변경합니다
	p2.set(10, 20); // set(&p2, 10, 20);
}
// C++, java, C# : 컴파일러가 멤버 함수 변경
// void set(int a, int b) ==> void set(Point* this, int a, int b)

// 파이썬 : 개발자가 직접 this(self)를 코딩해라!
//class Point :
//	def __init__(self, a, b) :
//		self.x = a
//		self.y = b 



