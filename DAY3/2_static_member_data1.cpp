// 2_static_member_data1 - 110 page
#include <iostream>

// ��� 1. ��� ����Ÿ ���
// ==> ��� ����Ÿ�� ��ü�� �Ѱ��� ���� ����� ����.
// ==> ��ü�� ���� �ľ� ����!!
class Car
{
	int color;
public:
	int cnt = 0;

	Car()  { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	// �ڵ����� ��볪 ����� ������ ������ �ľ��ϰ� �ʹ�.
	std::cout << c1.cnt << std::endl;
}
