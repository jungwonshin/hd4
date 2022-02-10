#include <iostream>


struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};

int main()
{
	// "메모리 layout 이야기" - 참고로 알아 두세요.
	//  Rect 타입 변수 생성시, 
	// 1. 멤버 데이타만 따로 놓이고
	// 2. 멤버 함수는 코드 메모리에 한개만 존재 합니다.
	Rect r1 = { 1,1,10,10 };
	Rect r2 = { 2,2,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16

	// "변수 vs 객체" 라는 용어
	int   n; // 변수(variable) 이라고 부릅니다.
	Rect  r; // 사용자 정의 타입의 변수 
			 // => 이제 부터 "객체(object)"
			 //    라고 부르겠습니다
}