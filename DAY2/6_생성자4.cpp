// 6_������3 - 78page �����Դϴ�
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	Rect()
	{
		std::cout << "Rect()" << std::endl;
	}
};
int main()
{
	Rect r; // �̼��� ȭ�� ��� ��� ������ ������.
			// 1. ����� �����ڰ� ���� ȣ��ǰ�
			// 2. Rect ��ü�� �����ڰ� ȣ��ȴ�
}

