#include <iostream>

#include <vector> // 이미 C++ 표준에서 "vector(동적배열)"을 제공합니다.
				  // 만들필요 없습니다. 표준 vector 사용하면 됩니다

int main()
{
	std::vector<int> v1(10); // 초기크기 10개 짜리 
	std::vector<int> v2 = { 1,2,3,4,5 }; // 배열 처럼 초기화도 가능

	// 1. 사용법 배열과 동일합니다 [] 연산자 사용
	v2[0] = 10;
	v2[1] = 20;

	// 2. 하지만 크기변경등이 가능해서 배열보다 훨씬 좋습니다.
	v2.resize(10);

	// 3. 편리한 멤버 함수가 많습니다.
	v2.push_back(3); // 끝에 한개 추가. 10개 에서 한개 추가 했으므로 11개 크기

	std::cout << v2.size() << std::endl;
}
// C++ 을 배우는 것
// 1. vector같은 것을 만드는 것을 배우는것 - 약간 어려운 내용(초~중급)
// 2. 표준에서 만들어준 vector를 잘 사용하는 것 - 어렵지 않습니다.


