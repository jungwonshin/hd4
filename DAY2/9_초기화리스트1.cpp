// 9_�ʱ�ȭ����Ʈ1 - 85page
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	// ��� �ʱ�ȭ ����Ʈ(member initializer list) : ������ () �ڿ� :�� ���� ����� 
	//												�ʱ�ȭ �ϴ°�
	Person(const std::string& s, int a) : name(s), age(a) // <== �� �ڵ尡 �����ϴ�.
	{
		// �Ʒ� ó�� �ʱ�ȭ�ϴ� ���� ���� �ʽ��ϴ�.
		name = s;
		age  = a; 
	}
};

int main()
{
	Person p("kim", 28);
}