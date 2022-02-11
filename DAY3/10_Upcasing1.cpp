// 10_Upcasing1  - ��ü���� �������� ù����..!
#include <iostream>

class Animal
{
	int age;
public:
	void cry() {}
};
class Dog : public Animal
{
	int color;
public:
	void setColor(int c) { color = c; }
};
int main()
{
	Dog dog;
	// �Ʒ� 3�� ������ ������..
	Dog*    p1 = &dog; // ok
//	int*    p2 = &dog; // error
	Animal* p3 = &dog; // ok
	
	// �ٽ� 1. ��� Ŭ���� Ÿ���� �����Ϳ�
	//		   �Ļ� Ŭ���� ��ü�� �ּҸ� ������ �ִ�.
	Animal* p = &dog;

	// �ٽ� 2. �׷���, Animal* p �δ� Animal�� ���� ���������͸� ���� �����ϴ�.
	p->cry();       // ok
	p->setColor(c); // error
				    // �����Ϸ��� p�� ����Ű�� ���� Animal �̶�� �����ϹǷ�

	// �ٽ� 3. Animal* p�� Dog�� ���� ��� �����Ϸ��� ĳ���� �ʿ�
	((Dog*)p)->setColor(10); // ok

	static_cast<Dog*>(p)->setColor(10); // C++ ��Ÿ��

}



