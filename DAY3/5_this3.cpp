// 5_this1 - 126page
#include <iostream>
class Point
{
	int x, y;
public:
	// 1. non-static ��� �Լ��� this�� �߰��Ǵ� ��
	void set(int a, int b) // void set(Point* this, int a, int b) <= this�߰�
	{
		x = a;
		y = b;
		std::cout << this << std::endl;
	}
	// 2. static ��� �Լ��� this�� �߰����� �ʴ� ��(��ü���� ȣ�Ⱑ���ϹǷ�)
	static void foo(int a) // void foo(int a) ��, ������ �Ǿ this �߰� �ȵ˴ϴ�.
	{
		std::cout << this << std::endl; // �ɱ�� ?? �� �Ǵ��� ������
									    // error
	}
};
int main()
{
	Point p1;
	p1.set(10, 20); // set(&p1, 10, 20)  => this�� �ִ� �߰��Ǵ� �Լ� 

	Point::foo(10); // ��ü ���� ȣ�Ⱑ��..�� �����ϵǾ �Ʒ�ó�� �˴ϴ�.
				    // foo(10)		=> this�� �߰��ɼ� ���� �Լ�
				
}




