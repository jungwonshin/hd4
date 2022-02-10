// 9_초기화리스트1 - 85page
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	Person(const std::string& s, int a) : name(s), age(a)  // 초기화 입니다.
	{
		name = s;
		age  = a; // 초기화가 아니라 대입 입니다.
	}
};

int main()
{
	Person p("kim", 28);

	// 초기화 vs 대입
	// 1. primitive type의 경우 "초기화"와 "대입"은 거의 동일합니다.
	int a = 10; // 초기화, 변수를 만들면서 넣는것
	int b;
	b = 10;		// 대입. 변수를 만든후에 넣는것

	// 2. user type의 경우는 많이 다릅니다.
	std::string s1("kim");	// 생성자 1회 호출되서 초기화가 됩니다.

	std::string s2;	// 1. 디폴트 생성자 호출
	s2 = "kim";		// 2. 대입연산자 호출( s2.operator=("kim"))
	
	// 3. 초기화는 되지만 대입은 안되는 것도 있습니다.
	const int c = 10; // ok 초기화 가능
	c = 20; // error. 대입은 안됨.


}
