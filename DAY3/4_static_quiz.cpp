// 4_static_quiz
class Object
{
	int idata;
	static int sdata;
public:
	// 다음중 에러를 모두 고르세요 - 116 참고
	void f1()
	{
		idata = 10; // 1
		sdata = 10; // 2
		f2();		// 3
	}
	static void f2()
	{
		idata = 10; // 4
		sdata = 10; // 5
		f1();		// 6
	}
};
int Object::sdata = 0;
int main()
{
}