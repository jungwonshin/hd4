// 5_this1 - 126page
#include <iostream>

class Point
{
	int x, y;
public:
	// this 활용 1. 멤버데이타 접근을 명확히 표기하고 싶을때
	void set(int x, int y) 
	{
		x = x;
		y = y;
	}
};
int main()
{
	Point p1;
	p1.set(10, 20); 


}




