// 5_this1 - 126page
#include <iostream>

class Point
{
	int x, y;
public:
	// this Ȱ�� 1. �������Ÿ ������ ��Ȯ�� ǥ���ϰ� ������
	void set(int x, int y) 
	{
		this->x = x; // "this->x" �� ��� ����Ÿ���� ��Ÿ���� ���� ���
		this->y = y;
	}
	// this Ȱ�� 2. this�� ��ȯ�ϴ� �Լ�.
	Point* foo() { return this; }
	Point  goo() { return *this; }
};
int main()
{
	Point p1;
	p1.set(10, 20); 

	// ��� �Լ��� this�� ��ȯ �ϸ� ����Լ�ȣ���� ���������� �Ҽ� �ֽ��ϴ�.
	p1.foo()->foo()->foo()->foo();
	// (&p1)->foo()
	p1.goo().goo().goo().goo();
}




