// 5_this1 - 126page
#include <iostream>
class Point
{
	int x, y;
public:
	void set(int a, int b) // void set(Point* this, int a, int b)
	{					   
		x = a;			   
		y = b;		
		// ��� �Լ��ȿ��� "this"��� Ű���带 ����Ҽ� �ֽ��ϴ�.
		// �ڽ��� ȣ���Ҷ� ����� ��ü�� �ּҰ� ��� �ֽ��ϴ�.
		std::cout << this << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20); // set(&p1, 10, 20) ó�� �����Ϸ��� �����մϴ�
	p2.set(10, 20); 
	std::cout << "&p1 : " << &p1 << std::endl;
	std::cout << "&p2 : " << &p2 << std::endl;
}




