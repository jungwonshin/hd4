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
	Base() {  }
	Base(int a) {  }
	~Base() { }
};
class Derived : public Base
{
	int data2;
public:
	// ����ڰ� ���� �ڵ�			// �����Ϸ��� ������ �ڵ�
	Derived()		{ }			// Derived()      : Base() {}	
	Derived(int a)	{ }			// Derived(int a) : Base() {}			
	~Derived()		{ }			// ~Derived()	  { ....; ~Base(); }	
};
int main()
{
	Derived d1;		// call Derived::Derived()    ȣ��
	Derived d2(5);  // call Derived::Derived(int) ȣ�� 
}