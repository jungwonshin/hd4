// 1_std.cpp
#include <iostream>
//using namespace std;

int count = 0;

int main()
{
	int n = count; // C++ ǥ�ؿ� "std::count()" ��� �Լ��� �ֽ��ϴ�.
				   // �������� count �� ǥ�� �Լ� count()�� �򰥷�(ambigous)
				   // �մϴ�.

	std::cout << "aa" << std::endl;
}

// ������ �ϸ� ������ �߻��մϴ�.
// �� �����ϱ�� ?