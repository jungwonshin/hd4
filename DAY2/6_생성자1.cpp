// 5_생성자1 - 78 page
#include <iostream>

class Point
{
public:
	int x;
	int y;
};

int main()
{
	// 모든 멤버가 public 에 있다면 아래처럼 초기화 가능합니다(C언어 구조체 문법)
	Point p1 = { 1, 1 };
}
