#include <iostream>

class Base
{
	int data;
public:
//	Base() {  }
	Base(int a) {  }
	~Base() { }
};
class Derived : public Base
{
	int data2;
public:
	// Base �� ����Ʈ �����ڰ� ������ �Ʒ��� ���� 
	// �����Ϸ��� ���� �ڵ� ������ ������ �߻��մϴ�.
	// ����ڰ� ���� �ڵ�		// �����Ϸ��� ������ �ڵ�
	Derived() { }			// Derived()      : Base() {}	
	Derived(int a) { }		// Derived(int a) : Base() {}			
	~Derived() { }			// ~Derived()	  { ....; ~Base(); }	
};
int main()
{
	Derived d1;		// call Derived::Derived()    ȣ��
	Derived d2(5);  // call Derived::Derived(int) ȣ�� 
}