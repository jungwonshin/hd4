// 6_생성자1 - 78 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	void init()
	{
		x = 0;
		y = 0;
	}
};
int main()
{
	// 모든 멤버가 public 에 있다면 아래처럼 초기화 가능합니다(C언어 구조체 문법)
	// private 에 있다면 아래 코드는 에러 입니다.
//	Point p1 = { 1, 1 }; 

	Point pt;
	pt.init();
}
