#include <iostream>
#include <typeinfo>

int main()
{
	// 일반 배열. 배열의 이름안에 크기 정보가 기록되어 있습니다.
	// x의 타입은 int[5] 입니다.
	int x[5] = { 1,2,3,4,5 };

	// p는 단지 포인터 변수 입니다.
	// p의 타입은 int* 이고, 크기 정보는 없습니다.
	int* p = new int[5]{ 1,2,3,4,5 }; // 이렇게 초기화 가능

	// x, p의 타입을 출력해 봅시다.
	std::cout << typeid(x).name() << std::endl; // int[5]
	std::cout << typeid(p).name() << std::endl; // int*

	// 새로운 for 문은 일반 배열은 되지만 동적할당된 배열 p는 안됩니다.
	for (auto e : x)
	{
	}
//	for (auto e : p) // error
//	{
//	}
	// 단, STL 의 vector, list, string 등은 모두 가능합니다.

	delete[] p;
}