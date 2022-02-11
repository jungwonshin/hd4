#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	Person() {}
	Person(const std::string& n, int a) : name(n), age(a) {}
};
class Student : public Person
{
	int id;
public:
	Student(int n) : id(n) {}
};
int main()
{
	Person p1;
	Person p2("kim", 20);
}