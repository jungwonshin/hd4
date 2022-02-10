#include <iostream>

// OOP 핵심 2.

struct Rect
{
	// 멤버 데이타 ("필드" 라고도 합니다.)
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수 ( "메소드" 라고도 합니다.)
	// 멤버 함수에서는 멤버 데이타를 바로 접근 가능합니다.
	// => 그래서, 함수 인자로 데이타를 전달 받을 필요 없습니다.
	void getRectArea()
	{
		return (right - left) * (bottom - top);
	}
	void drawRect()
	{
		std::cout << "draw rect" << std::endl;
	}
};

int main()
{
	Rect r = { 1,1,10,10 };
//	int n = getRectArea(r);
//	drawRect(r);

	int n = r.getRectArea();
	r.drawRect();
}