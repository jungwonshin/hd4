// 5_this1 - 126page
#include <iostream>
// 1. ��ü ������ ��� ����Ÿ�� ��ü�� �Ѱ��� �����˴ϴ�
// 2. ��� �Լ��� �ڵ�޸𸮿� �Ѱ��� �ֽ��ϴ�.
class Point
{
	int x, y;
public:
	// ��� �Լ��� �ᱹ, ������ �Ǹ� 
	// 1��° ���ڷ� ��ü�� �ּҸ� ������ �ְ� ����Ǵ� ���Դϴ�.
	void set(int a, int b) // void set(Point* this, int a, int b)
	{					   //
		x = a;			   // this->x = a;
		y = b;			   // this->y = b; ��� ����Ȱ� �Դϴ�.
	}
};
int main()
{
	Point p1;
	Point p2;

	p1.set(10, 20); // set(&p1, 10, 20) ó�� �����Ϸ��� �����մϴ�
	p2.set(10, 20); // set(&p2, 10, 20);
}
// C++, java, C# : �����Ϸ��� ��� �Լ� ����
// void set(int a, int b) ==> void set(Point* this, int a, int b)

// ���̽� : �����ڰ� ���� this(self)�� �ڵ��ض�!
//class Point :
//	def __init__(self, a, b) :
//		self.x = a
//		self.y = b 



