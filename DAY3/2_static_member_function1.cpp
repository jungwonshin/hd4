// 2_static_member_function1
#include <iostream>

class Car
{
	int color;		
	static int cnt; 
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int getCount() { return cnt; } // ��ü�� �־�߸� ȣ�Ⱑ��
	
	static int getCount() { return cnt; } // ��ü�� ��� ȣ�� ������ �Լ�
										  // "Ŭ�����̸�::�Լ��̸�" ���� ȣ��
};
int Car::cnt = 0;

int main()
{
	// ���⼭ �ڵ����� ������ �˰� �ʹ� ???
	// => Car::cnt �� ��ü�� ��� �޸𸮿� �����Ƿ� �о� �ü��־�� �Ѵ�.
	std::cout << Car::getCount() << std::endl; // 0 

	Car c1;
	Car c2;

//	std::cout << Car::cnt << std::endl; // error. private ���
	std::cout << c1.getCount() << std::endl; // ok. ������ �Ʒ� �ڵ尡 �����ϴ�.
	std::cout << Car::getCount() << std::endl; // "Ŭ�����̸�::�Լ��̸�" ���� ����ϼ���
}
