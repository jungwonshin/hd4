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

// 1. 디폴트 생성자가 있는 경우가 많긴 하지만, 보다 안전한 타입을 설계할때는
//    디폴트 생성자가 없는 경우도 종종 있다.
//    "반드시 초기값을 전달 해달라" 라는 의미!

// 2. Person 의 private 멤버는 Person에서 책임져야 합니다.
//    외부 또는 파생 클래스에서도 내부 멤버 데이타를 알 필요 없습니다.
//    단지, Person 객체를 만들려면 "이름 과 나이"가 필요하다 는 것만 알면 됩니다.

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