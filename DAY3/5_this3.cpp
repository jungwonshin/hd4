// 5_this1 - 126page
#include <iostream>
class Point
{
	int x, y;
public:
	void set(int a, int b)
	{
		x = a;
		y = b;
		std::cout << this << std::endl;
	}
	static void foo(int a)
	{
		std::cout << this << std::endl; // �ɱ�� ?? �� �Ǵ��� ������
	}
};
int main()
{
	Point p1;
	p1.set(10, 20); 
}




