// 7_상속1 - 132 page
#include <iostream>
#include <string>

// 모든 사람의 공통의 특징을 가지는 타입 설계
class Person
{
	std::string name;
	int age;
};

// 상속(inheritance ) : 기존 타입을 확장해서 새로운 타입을 설계하는 문법
//                      코드의 중복을 줄일수 있고, 다양한 객체지향 디자인 기술활용가능
// C++    : class Student : public Person
// C#     : class Student : Person
// python : class Student(Person)
// java   : class Student extends Person

// Person  : Base(기반) Class,    Super Class, Parent Class
// Student : Derived(파생) Class, Sub Class,   Child Class


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