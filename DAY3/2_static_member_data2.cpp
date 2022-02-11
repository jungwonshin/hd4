#include <iostream>

// 방법 2. 전역변수 사용

int cnt = 0;

class Car
{
	int color;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	// 자동차가 몇대나 만들어 졌는지 갯수를 파악하고 싶다.
	std::cout << cnt << std::endl; // 2
}
