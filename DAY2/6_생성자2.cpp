#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
		std::cout << "Point()" << std::endl;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
		std::cout << "Point(int, int)" << std::endl;
	}
	// �Ҹ��� : ��ü�� �ĵ� �ɶ� �ڵ����� ȣ��Ǵ� �Լ�
	// ��ȯ Ÿ���� ����, ���ڵ� ����. ���� �Ѱ��� ����� �ִ�.
	~Point()
	{
		std::cout << "~Point()" << std::endl;
	}
};
int main()
{
	Point pt1;		
	Point pt2(1, 2);

	std::cout << "--------" << std::endl;

} //<-- �� �������� pt2, pt1 �� �ı� �˴ϴ�.(���������̹Ƿ� {} ����� �ı�)	
  // �Ҹ��ڰ� ȣ��˴ϴ�.
  // ���߿� ������� ���� �ı� �˴ϴ�.

// �������� ������ �˰ڴµ�!!, �Ҹ��ڴ� �� ���峪�� ??
// => �ʿ� ������ ������ ������.. �ʿ��� ��츸 ����� �˴ϴ�.(���Ŀ� ����)

