// QA
// oop2에서 Rect 만 복사 하세요

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
void f1(Rect  obj) {} // call by value : 복사본생성, 메모리 오버헤드가 큽니다.

void f2(Rect& obj) { obj.left = 10; } // call by reference : 복사본 없다
									  // 원본 수정 가능 
// 복사본도 없고, 원본도 수정되지 않음을 보장하려면
// const reference 가 좋습니다.
void f3(const Rect& obj) 
{
//	obj.left = 10;  // error
}
int main()
{
	Rect r;
	f1(r);
	f2(r);
}
// 다음중 좋은 코드는 ?  - 인자값을 변경하지 않는 함수 만들때!!
void f5(int n)        {} // 좋은 코드..
void f6(const int& n) {} // 절대 이렇게는 하지 마세요.


// 함수 인자 받는 방법
// 1. 인자값을 변경하고 싶다 - out parameter
//    => 포인터도 좋고      void inc(int* p) { ++(*p);}
//    => 참조도 좋습니다    void inc(int& r) { ++r;}

// 2. 인자값을 변경하지 않는 경우 - in parameter
//    인자가
//    primitive type 이면 : call by value로 하세요!  foo(int n)
//    user define type이면 : const reference        foo(const Rect& r) 
// 구글에서 "c++ core guideline" 검색해 보세요.. 1번째 링크

// 코드를 작성할때 "이렇게 하는게 좋다" => 흔히 guide line 이라고 합니다.
// 임베디드 : MISRA-C, MISRA-C++
// 범용적인 C++ 코딩 규칙 : "c++ core guideline"  
