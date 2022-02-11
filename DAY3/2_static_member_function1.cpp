// 2_static_member_function1
#include <iostream>

class Car
{
	int color;		
public:
	static int cnt; 

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0;

int main()
{
	Car c1;
	Car c2;

	std::cout << Car::cnt << std::endl; 
}
