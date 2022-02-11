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

// 3. Student �����ڵ� �ᱹ Person �� ����� �Դϴ�.
//    "������ �ִ� Ÿ������ ���� Ȯ���ؼ� �����ϹǷ�"!!

class Student : public Person
{
	int id;
public:
	// �Ʒ� �����ڴ� ���� �Դϴ�. �����Ϸ��� ������ �ڵ�(�ּ�)�� ���� �ϼ���
//	Student(int n) : id(n) {} // Student(int n) : Person(), id(n) {} �̹Ƿ� error

	// ��� ����� �̸��� ���̰� �ʿ� �ϹǷ� �Ʒ� ó�� ��� Ŭ���� �����ڸ� ȣ���ؾ� �մϴ�.
	Student(const std::string& s, int a, int n) : Person(s, a),  id(n) {}
};


int main()
{
//	Person p1;  // error
	Person p2("kim", 20);

//	Student s1(99);
	Student s2("kim", 20, 99);
}