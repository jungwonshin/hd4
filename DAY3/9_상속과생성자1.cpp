// 9_��Ӱ�������1 - �߿�!!

#include <iostream>
// Derived ��ü�� �����ϸ�
// 1. Base �����ڰ� ���� ȣ��ǰ�, Derived ������ ȣ��
// 2. Base �����ڴ� �׻� ���ڰ� ���� ����Ʈ ���� ȣ��
// 3. �Ҹ��ڴ� �ݴ��!!

// �׷���, ��Ȯ�� ������ �˾ƾ� �մϴ�.

class Base
{
	int data;
public:
	Base()      { std::cout << "Base()"    << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()"   << std::endl; }
};
class Derived : public Base
{
	int data2;
public:
	Derived()      { std::cout << "Derived()" << std::endl; }
	Derived(int a) { std::cout << "Derived(int)" << std::endl; }
	~Derived()     { std::cout << "~Derived()" << std::endl; }
};
int main()
{
//	Derived d1; // ������ ������ ������.
	Derived d2(5);
}