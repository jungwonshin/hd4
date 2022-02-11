#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
//	Person() {}
	Person(const std::string& n, int a) : name(n), age(a) {}
};

// 1. ����Ʈ �����ڰ� �ִ� ��찡 ���� ������, ���� ������ Ÿ���� �����Ҷ���
//    ����Ʈ �����ڰ� ���� ��쵵 ���� �ִ�.
//    "�ݵ�� �ʱⰪ�� ���� �ش޶�" ��� �ǹ�!

// 2. Person �� private ����� Person���� å������ �մϴ�.
//    �ܺ� �Ǵ� �Ļ� Ŭ���������� ���� ��� ����Ÿ�� �� �ʿ� �����ϴ�.
//    ����, Person ��ü�� ������� "�̸� �� ����"�� �ʿ��ϴ� �� �͸� �˸� �˴ϴ�.

class Student : public Person
{
	int id;
public:
	Student(int n) : id(n) {}
};
int main()
{
//	Person p1;  // error
	Person p2("kim", 20);

	Student s1(99);
}