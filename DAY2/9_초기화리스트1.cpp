// 9_초기화리스트1 - 85page
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	// 멤버 초기화 리스트(member initializer list) : 생성자 () 뒤에 :을 적고 멤버를 
	//												초기화 하는것
	Person(const std::string& s, int a) : name(s), age(a) // <== 이 코드가 좋습니다.
	{
		// 아래 처럼 초기화하는 것은 좋지 않습니다.
		name = s;
		age  = a; 
	}
};

int main()
{
	Person p("kim", 28);
}