#include <iostream>

// 방법 2. 전역변수 사용
//	==> 오직 한개만 있고, 모든 객체가 공유합니다.
//  ==> 객체의 갯수 파악 성공.
// 그런데.. 
//  ==> 안전하지 않다. 전역변수는 언제/어디서도 접근이 가능하다.
//  ==> private 을 사용해서 보호할수 없을까 ?
//      다음예제...
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

	cnt = -10; // 사용자가 실수 했다.. 

	// 자동차가 몇대나 만들어 졌는지 갯수를 파악하고 싶다.
	std::cout << cnt << std::endl; // 2
}
