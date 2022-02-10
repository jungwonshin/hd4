#include <iostream>

// 객체지향프로그래밍(Object Oriented Programming, OOP)
// => 필요한 타입을 먼저 설계하자.

// "Point", "Rect", "Person" 같은 것만 만드는 것이 아닙니다.
// 아주 다양한 개념의 타입을 설계할수 있습니다.

// 동적 배열(vector) 을 타입으로 설계해 봅시다.

class vector
{

};
int main()
{
	vector v(5); // 5개 짜리 동적 배열
	v.resize(10);// 10개로 크기 변경.
}