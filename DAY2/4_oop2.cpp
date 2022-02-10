#include <iostream>

// OOP 핵심 1. 프로그램에서 필요한 타입을 먼저 설계 하자.!
//             그리고, 타입을 사용해서 코드를 작성하자.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
// 사용자 정의 타입을 인자로 받을때는
// 읽기만 한다면 "call by value" 대신 "const reference" 가 좋다.
void getRectArea(const Rect& r)
{
	return (r.right - r.left) * (r.bottom - r.top);
}
void drawRect(const Rect& r)
{
	std::cout << "draw rect" << std::endl;
}
int main()
{
	Rect r = { 1,1,10,10 };
	int n = getRectArea(r);
	drawRect(r);
}