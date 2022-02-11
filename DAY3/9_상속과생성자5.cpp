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

// 3. Student 설계자도 결국 Person 의 사용자 입니다.
//    "기존에 있던 타입으로 부터 확장해서 설계하므로"!!

class Student : public Person
{
	int id;
public:
	// 아래 생성자는 에러 입니다. 컴파일러가 생성한 코드(주석)을 참고 하세요
//	Student(int n) : id(n) {} // Student(int n) : Person(), id(n) {} 이므로 error

	// 모든 사람은 이름과 나이가 필요 하므로 아래 처럼 기반 클래스 생성자를 호출해야 합니다.
	Student(const std::string& s, int a, int n) : Person(s, a),  id(n) {}
};


int main()
{
//	Person p1;  // error
	Person p2("kim", 20);

//	Student s1(99);
	Student s2("kim", 20, 99);
}