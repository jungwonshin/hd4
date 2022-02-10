// 5_접근지정자 - 74page
#include <string>

// 핵심 : 타입을 만들때 "사용하기 쉽고", "안전하게" 만들어야 한다.

struct Person
{
private:				// private 영역 : 멤버함수에서만 접근 가능
						//				 멤버함수가 아닌곳에서 접근시 에러
	std::string name;
	int age;

public:					// public 영역 : 모든 곳에서 접근 가능.
	void setAge(int value)
	{
		age = value;
	}
};

int main()
{
	Person p;

//	p.age = -10; // Person 타입 사용자가 실수 했다.
				 // 현실세계에 존재할수 없는 객체가 생성
				 // private 멤버라면 error.
	p.setAge(-10);
}