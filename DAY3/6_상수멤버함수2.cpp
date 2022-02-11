// 상수 멤버 함수는 선택이 아닌 필수 문법입니다.
// 멤버 함수 만들때 객체의 상태를 변경하지 않은 모든 멤버 함수는 반드시 
// "상수 멤버함수"로 해야 합니다.
// getter(값을 얻는 "주로 get으로 시작하는" 멤버 함수들은) 반드시 상수 멤버 함수가 되어야 합니다

// 도전 과제 : 오늘 만든 "Date" 클래스의 멤버 함수를 적절히 const 멤버로 변경해 보세요
// Date afterDays(int ds)    <== 붙일까요 ? 말까요 ?
// Date d = today.afterDays(1000) <= today 객체 상태 변경안됨.. const 붙여야 합니다
//          today.setYear(2022)   <= 상태 변경됨.. const 붙이면 안됩니다.

class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d)
	{
	}
	int getArea() const  { return w * h; }
};

//void foo(Rect r)      // call by value : 복사본을 생성합니다. user type 일때는 절대 사용하지 마세요
void foo(const Rect& r) // const reference가 좋습니다.
{
	int n = r.getArea();
}
int main()
{
	Rect rc(1, 1, 10, 10);
	int n = rc.getArea();
	foo(rc);
}
// 위 코드의 단점을 수정해 보세요..