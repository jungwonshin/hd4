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