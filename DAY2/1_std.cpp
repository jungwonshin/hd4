// 1_std.cpp
#include <iostream>
//using namespace std;

int count = 0;

int main()
{
	int n = count; // C++ 표준에 "std::count()" 라는 함수가 있습니다.
				   // 전역변수 count 와 표준 함수 count()를 헷갈려(ambigous)
				   // 합니다.

	std::cout << "aa" << std::endl;
}

// 컴파일 하면 에러가 발생합니다.
// 왜 에러일까요 ?