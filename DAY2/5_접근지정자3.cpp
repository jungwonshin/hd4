#include <string>

// C++
class Person
{
private:
	std::string name;
	int age;
public:
	void setAge(int value)
	{
		if (value > 0 && value < 150)
			age = value;
	}
};

// 다른 객체지향 언어는 모든 멤버에 각각 지정합니다.(java, C# 등의 대부분객체지향언어)
class Person
{
	private std::string name;
	private int age;
	public void setAge(int value)
	{
		if (value > 0 && value < 150)
			age = value;
	}
};
// 파이썬도 클래스를 만들수 있지만 "접근지정자 문법이 없습니다" 
// => 만들자고 제안이 많이 들어가고 있지만 아직 채택 안됨.