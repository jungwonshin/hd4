#include <iostream>
#include <vector> 

int main()
{
	std::vector<int> v; // �ʱ�ũ�� 0

	int num;

	while (1)
	{
		std::cin >> num;

		if (num == -1)
			break;
		v.push_back(num); // �Էµ� �� ����. vector�� �˾Ƽ� �޸� ������ �ݴϴ�.
	}
	std::cout << "�Էµ� ���� : " << v.size() << std::endl;

	for (auto e : v)  // ���ο� for �� ��밡��
		std::cout << e << ", ";

	// v�� ����ϴ� �޸𸮴� vector �Ҹ��ڰ� �˾Ƽ� �ı����ֹǷ�..
	// ����ڰ� �Ű澵 �ʿ� �����ϴ�.
}




