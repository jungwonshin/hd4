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
	// ��� Ŭ������ ����Ʈ �����ڰ� ���� ���, �ݵ�� �Ʒ�ó�� ����ڰ� ����
	// �ٸ� ������ �����ڸ� ȣ���ؾ� �մϴ�. => �� �κ��� ���� C++�����ڰ� ����� �մϴ�.
	Derived()	   : Base(0) { }
	Derived(int a) : Base(a) { }
	~Derived() { }			
};
int main()
{
	Derived d1;		
	Derived d2(5);  
}