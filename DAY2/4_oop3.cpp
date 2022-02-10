#include <iostream>

// OOP �ٽ� 2. Ÿ���� ���鶧
//			  ���¸� ��Ÿ���µ���Ÿ�� ���¸� ������ ������ �����ϴ� �Լ��� ���
//		      Ÿ���� ������

// C ����ü   : �Լ��� �����Ҽ� ����.
// C++ ����ü : �Լ��� �����Ҽ� �ִ�.


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
	void getArea()
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
	Rect r = { 1,1,10,10 };
//	int n = getRectArea(r);
//	drawRect(r);

	int n = r.getArea();
	r.draw();
}