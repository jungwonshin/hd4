// 9_�ʱ�ȭ����Ʈ1 - 85page
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	Person(const std::string& s, int a)
	{
		name = s;
		age  = a; 
	}
};

int main()
{
	Person p("kim", 28);
}