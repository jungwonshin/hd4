// pe2.cpp
#include <iostream>

int g = 10;

int main()
{
	int n = 0;
	int* p = new int;

	// 아래 결과로 나오는 주소를 유심히 보세요. 근접한 주소가 어떤 것인지 잘 보세요
	printf("main 함수 주소 : %p\n", &main);
	printf("전역변수 주소  : %p\n", &g);
	printf("지역변수 주소  : %p\n", &n);
	printf("힙에 할당된 메모리 주소: %p\n", p); // 주의 &p 가 아닌 p 입니다.

	delete p;
}