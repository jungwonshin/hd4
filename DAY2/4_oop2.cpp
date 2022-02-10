#include <iostream>

// OOP �ٽ� 1. ���α׷����� �ʿ��� Ÿ���� ���� ���� ����.!
//             �׸���, Ÿ���� ����ؼ� �ڵ带 �ۼ�����.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
// ����� ���� Ÿ���� ���ڷ� ��������
// �б⸸ �Ѵٸ� "call by value" ��� "const reference" �� ����.
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