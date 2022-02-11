class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d)
	{
	}
	int getArea() { return w * h; }
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