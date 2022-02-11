// 1_화일분할.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
	~Point() {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
};
int main()
{
	Point p(1, 2);
}