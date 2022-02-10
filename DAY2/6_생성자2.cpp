#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
		std::cout << "Point()" << std::endl;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
		std::cout << "Point(int, int)" << std::endl;
	}
	// 소멸자 : 객체가 파되 될때 자동으로 호출되는 함수
	// 반환 타입이 없고, 인자도 없다. 오직 한개만 만들수 있다.
	~Point()
	{
		std::cout << "~Point()" << std::endl;
	}
};
int main()
{
	Point pt1;		
	Point pt2(1, 2);

	std::cout << "--------" << std::endl;

} //<-- 이 지점에서 pt2, pt1 이 파괴 됩니다.(지역변수이므로 {} 벗어날때 파괴)	
  // 소멸자가 호출됩니다.

