// 4_static_quiz
class Object
{
	int idata;
	static int sdata;
public:
	// ������ ������ ��� ������ - 116 ����
	// static ��� ����Ÿ : ��ü�� ��� �޸𸮿� �ִ�, ��� ��ü�� ����
	// static ��� �Լ�   : ��ü���� ȣ�Ⱑ��.
	void f1()
	{
		idata = 10; // 1
		sdata = 10; // 2
		f2();		// 3
	}
	// �ٽ� : static ��� �Լ��� static ����� ���� �����մϴ�.
	static void f2()
	{
		idata = 10; // 4. error. idata �� ��ü�� �־�߸� �޸𸮿� ���̰� �˴ϴ�.
		sdata = 10; // 5. ok.
		f1();		// 6. error. f1()�� static �� �ƴ� ����Լ��̹Ƿ�
					//			��ü�� �־�� ȣ�Ⱑ���մϴ�.
	}
};
int Object::sdata = 0;
int main()
{
	Object::f2(); // ��ü ���� �̷��� ȣ�Ⱑ���Ѱ��� �ٽ��Դϴ�

	Object obj;
	obj.f1(); // f1�� ��ü�� �־�߸� ȣ�Ⱑ���մϴ�
}