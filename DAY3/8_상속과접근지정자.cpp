// 8_상속과접근지정자 - 134 page
// C++에는 3개의 접근 지정자가 있습니다 : private, protected, public
// 다른 객체지향 언어는 : 위 3개 + 1~2개정도 더있습니다.(package, internal 등)
class Base
{
private:	int a; // 자신의 멤버 함수에서만 접근 가능
protected:	int b; // 자신의 멤버함수와 파생클래스의 멤버 함수에서 접근 가능
public:  	int c; // 모든 곳에서 접근 가능
};
class Derived : public Base
{
public:
	void fn()
	{
		a = 10; // error.  private
		b = 10; // ok.     protected
		c = 10; // ok
	}
};
int main()
{
	Base base;
	base.a = 10; // error. private 멤버
	base.b = 10; // error. protected 
	base.c = 10; // ok.    public  멤버     
}