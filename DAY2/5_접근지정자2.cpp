#include <string>

// struct : 접근 지정자 생략시 public 입니다.
// class  : 접근 지정자 생략시 private 입니다.

// C++ : struct 와 class 차이는 위 한가지만 다르고 완전히 동일합니다.
// 
// 다른 언어(C#, java등) : 차이점이 꽤 큰 편입니다.

//struct Person
class Person
{
//private:
	std::string name;
	int age;

public:	
	void setAge(int value)
	{
		if (value > 0 && value < 150)
			age = value;
	}
};
int main()
{
	Person p;
	p.setAge(-10);
}