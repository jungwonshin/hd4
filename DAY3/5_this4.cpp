// 5_this1 - 126page
#include <iostream>

class Point
{
	int x, y;
public:
	// this Ȱ�� 1. �������Ÿ ������ ��Ȯ�� ǥ���ϰ� ������
	void set(int x, int y) 
	{
		x = x;
		y = y;
	}
};
int main()
{
	Point p1;
	p1.set(10, 20); 


}




