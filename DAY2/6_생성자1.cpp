// 6_������1 - 78 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	void init()
	{
		x = 0;
		y = 0;
	}
};
int main()
{
	// ��� ����� public �� �ִٸ� �Ʒ�ó�� �ʱ�ȭ �����մϴ�(C��� ����ü ����)
	// private �� �ִٸ� �Ʒ� �ڵ�� ���� �Դϴ�.
//	Point p1 = { 1, 1 }; 

	Point pt;
	pt.init();
}
