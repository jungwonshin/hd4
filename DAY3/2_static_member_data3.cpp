#include <iostream>

// ��� 3. 



class Car
{
	int color;
public:
//	int cnt = 0; // ��ü�� �Ѱ��� ����
	static int cnt; // ��� ��ü�� ����

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static ��� ����Ÿ�� �ݵ�� �ܺ� ������ �ʿ� �մϴ�
int Car::cnt = 0;

int main()
{
	Car c1;
	Car c2;

	// static ��� ����Ÿ�� �����ϴ� 2���� ���
	std::cout << c1.cnt   << std::endl; // 1. ��ü�̸�.static ����̸�
	std::cout << Car::cnt << std::endl; // 2. Ŭ�����̸�::static����̸�
						// 1���� "cnt" �� static ���� �ƴ��� ������ ��ƽ��ϴ�.
						// 2���� �����մϴ�.
						// �� 2���� ����� �ְ�, 2���� �����ϳ��� ?
						// ���� 2���� �ǵ����ϸ� ���� �ʳ��� ?
						// ==> ��, �׷���, C#, java ���� Ŭ�����̸����θ� ���ٰ����մϴ�
}
