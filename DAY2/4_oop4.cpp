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
	// "�޸� layout �̾߱�" - ����� �˾� �μ���.
	//  Rect Ÿ�� ���� ������, 
	// 1. ��� ����Ÿ�� ���� ���̰�
	// 2. ��� �Լ��� �ڵ� �޸𸮿� �Ѱ��� ���� �մϴ�.
	Rect r1 = { 1,1,10,10 };
	Rect r2 = { 2,2,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16

	// "���� vs ��ü" ��� ���
	int   n; // ����(variable) �̶�� �θ��ϴ�.
	Rect  r; // ����� ���� Ÿ���� ���� 
			 // => ���� ���� "��ü(object)"
			 //    ��� �θ��ڽ��ϴ�
}