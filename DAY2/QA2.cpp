#include <iostream>
#include <typeinfo>

int main()
{
	// �Ϲ� �迭. �迭�� �̸��ȿ� ũ�� ������ ��ϵǾ� �ֽ��ϴ�.
	// x�� Ÿ���� int[5] �Դϴ�.
	int x[5] = { 1,2,3,4,5 };

	// p�� ���� ������ ���� �Դϴ�.
	// p�� Ÿ���� int* �̰�, ũ�� ������ �����ϴ�.
	int* p = new int[5]{ 1,2,3,4,5 }; // �̷��� �ʱ�ȭ ����

	// x, p�� Ÿ���� ����� ���ô�.
	std::cout << typeid(x).name() << std::endl; // int[5]
	std::cout << typeid(p).name() << std::endl; // int*

	// ���ο� for ���� �Ϲ� �迭�� ������ �����Ҵ�� �迭 p�� �ȵ˴ϴ�.
	for (auto e : x)
	{
	}
//	for (auto e : p) // error
//	{
//	}
	// ��, STL �� vector, list, string ���� ��� �����մϴ�.

	delete[] p;
}