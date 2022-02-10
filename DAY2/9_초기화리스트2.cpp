// 9_�ʱ�ȭ����Ʈ1 - 85page
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	Person(const std::string& s, int a) : name(s), age(a)  // �ʱ�ȭ �Դϴ�.
	{
		name = s;
		age  = a; // �ʱ�ȭ�� �ƴ϶� ���� �Դϴ�.
	}
};

int main()
{
	Person p("kim", 28);

	// �ʱ�ȭ vs ����
	// 1. primitive type�� ��� "�ʱ�ȭ"�� "����"�� ���� �����մϴ�.
	int a = 10; // �ʱ�ȭ, ������ ����鼭 �ִ°�
	int b;
	b = 10;		// ����. ������ �����Ŀ� �ִ°�

	// 2. user type�� ���� ���� �ٸ��ϴ�.
	std::string s1("kim");	// ������ 1ȸ ȣ��Ǽ� �ʱ�ȭ�� �˴ϴ�.

	std::string s2;	// 1. ����Ʈ ������ ȣ��
	s2 = "kim";		// 2. ���Կ����� ȣ��( s2.operator=("kim"))
	
	// 3. �ʱ�ȭ�� ������ ������ �ȵǴ� �͵� �ֽ��ϴ�.
	const int c = 10; // ok �ʱ�ȭ ����
	c = 20; // error. ������ �ȵ�.


}
