// 5_this1 - 126page
#include <iostream>
class Point
{
	int x, y;
public:
	void set(int a, int b) // void set(Point* this, int a, int b)
	{					   
		x = a;			   
		y = b;		
		// 멤버 함수안에서 "this"라는 키워드를 사용할수 있습니다.
		// 자신을 호출할때 사용한 객체의 주소가 들어 있습니다.
		std::cout << this << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20); // set(&p1, 10, 20) 처럼 컴파일러가 변경합니다
	p2.set(10, 20); 
	std::cout << "&p1 : " << &p1 << std::endl;
	std::cout << "&p2 : " << &p2 << std::endl;
}




