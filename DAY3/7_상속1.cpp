// 7_���1 - 132 page
#include <iostream>
#include <string>

// ��� ����� ������ Ư¡�� ������ Ÿ�� ����
class Person
{
	std::string name;
	int age;
};

// ���(inheritance ) : ���� Ÿ���� Ȯ���ؼ� ���ο� Ÿ���� �����ϴ� ����
//                      �ڵ��� �ߺ��� ���ϼ� �ְ�, �پ��� ��ü���� ������ ���Ȱ�밡��
// C++    : class Student : public Person
// C#     : class Student : Person
// python : class Student(Person)
// java   : class Student extends Person

// Person  : Base(���) Class,    Super Class, Parent Class
// Student : Derived(�Ļ�) Class, Sub Class,   Child Class


class Student : public Person
{
	int id;
};

class Professor : public Person
{
	int major;
};

int main()
{
	Student s;
	Professor p;
}