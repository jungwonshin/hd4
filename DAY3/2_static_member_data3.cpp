#include <iostream>

// 방법 3. static 멤버 데이타
// 1. 클래스 외부에서 선언이 필요합니다. 
// 특징
// 1. 객체를 생성하지 않아도 메모리에 놓이게 됩니다.
//    ==> 접근 지정자 사용이 가능해진, Car 전용 전역변수 처럼 생각하시면 됩니다.
// 
// 2. 객체 생성시는 non-static 멤버만 객체의 크기에 포함됩니다.

// 3. 클래스이름 또는 객체이름으로 접근 가능하지만.. 되도록 클래스이름으로 접근하세요
//    ==> "Car::cnt"

class Car
{
	int color;		// "instance member"  라고도 합니다.
public:
//	int cnt = 0; // 객체당 한개씩 생성
	static int cnt; // 모든 객체가 공유. -"class member" 라고도 합니다.

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static 멤버 데이타는 반드시 외부 선언이 필요 합니다
int Car::cnt = 0;

int main()
{
	// 객체가 없어도 static 멤버 데이타는 메모리에 있습니다.
	std::cout << Car::cnt << std::endl; // 0


	Car c1;
	Car c2;

	// static 멤버 데이타에 접근하는 2가지 방법
	std::cout << c1.cnt   << std::endl; // 1. 객체이름.static 멤버이름
	std::cout << Car::cnt << std::endl; // 2. 클래스이름::static멤버이름
						// 1번은 "cnt" 가 static 인지 아닌지 구별이 어렵습니다.
						// 2번을 권장합니다.
						// 왜 2가지 방법이 있고, 2번을 권장하나요 ?
						// 차라리 2번만 되도록하면 좋지 않나요 ?
						// ==> 네, 그래서, C#, java 등은 클래스이름으로만 접근가능합니다
}
