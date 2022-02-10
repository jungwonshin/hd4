// 6_생성자1 - 78 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 생성자 : 1. 클래스 이름과 동일한 이름의 함수
	//		    2. 반환 타입을 표기하지 않고, 값도 반환 할수 없다.
	//          3. 객체를 생성하면 자동으로 생성자가 호출된다.
	Point()
	{
		x = 0;
		y = 0;
		std::cout << "Point()" << std::endl;
	}
	// 생성자는 인자가 있어도 되고 없어도 됩니다.
	// 2개 이상 만들수 있다는 의미(오버로딩 가능)
	Point(int a, int b)
	{
		x = a;
		y = b;
		std::cout << "Point(int, int)" << std::endl;
	}
};
int main()
{
	// 모든 멤버가 public 에 있다면 아래처럼 초기화 가능합니다(C언어 구조체 문법)
	// private 에 있다면 아래 코드는 에러 입니다.
//	Point p1 = { 1, 1 }; 

	Point pt;		// 인자가 없는 생성자 호출
//	pt.init();

	Point pt2(1, 2); // 인자가 2개인 생성자 호출
}

