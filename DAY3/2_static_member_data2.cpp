#include <iostream>

// ��� 2. �������� ���

int cnt = 0;

class Car
{
	int color;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	// �ڵ����� ��볪 ����� ������ ������ �ľ��ϰ� �ʹ�.
	std::cout << cnt << std::endl; // 2
}
