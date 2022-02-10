#include <iostream>

// OOP �ٽ� 2.

struct Rect
{
	// ��� ����Ÿ ("�ʵ�" ��� �մϴ�.)
	int left;
	int top;
	int right;
	int bottom;

	// ��� �Լ� ( "�޼ҵ�" ��� �մϴ�.)
	// ��� �Լ������� ��� ����Ÿ�� �ٷ� ���� �����մϴ�.
	// => �׷���, �Լ� ���ڷ� ����Ÿ�� ���� ���� �ʿ� �����ϴ�.
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