// 4_static_quiz
class Object
{
	int idata;
	static int sdata;
public:
	// 다음중 에러를 모두 고르세요 - 116 참고
	// static 멤버 데이타 : 객체가 없어도 메모리에 있다, 모든 객체가 공유
	// static 멤버 함수   : 객체없이 호출가능.
	void f1()
	{
		idata = 10; // 1
		sdata = 10; // 2
		f2();		// 3
	}
	// 핵심 : static 멤버 함수는 static 멤버만 접근 가능합니다.
	static void f2()
	{
		idata = 10; // 4. error. idata 는 객체가 있어야만 메모리에 놓이게 됩니다.
		sdata = 10; // 5. ok.
		f1();		// 6. error. f1()은 static 이 아닌 멤버함수이므로
					//			객체가 있어야 호출가능합니다.
	}
};
int Object::sdata = 0;
int main()
{
	Object::f2(); // 객체 없이 이렇게 호출가능한것이 핵심입니다

	Object obj;
	obj.f1(); // f1은 객체가 있어야만 호출가능합니다
}