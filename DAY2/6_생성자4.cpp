// 6_생성자3 - 78page 내용입니다
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	Rect()
	{
		std::cout << "Rect()" << std::endl;
	}
};
int main()
{
	Rect r; // 이순간 화면 출력 결과 예측해 보세요.
			// 1. 멤버의 생성자가 먼저 호출되고
			// 2. Rect 자체의 생성자가 호출된다
}

