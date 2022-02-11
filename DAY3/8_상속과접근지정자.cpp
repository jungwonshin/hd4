// 8_��Ӱ����������� - 134 page
// C++���� 3���� ���� �����ڰ� �ֽ��ϴ� : private, protected, public
// �ٸ� ��ü���� ���� : �� 3�� + 1~2������ ���ֽ��ϴ�.(package, internal ��)
class Base
{
private:	int a; // �ڽ��� ��� �Լ������� ���� ����
protected:	int b; // �ڽ��� ����Լ��� �Ļ�Ŭ������ ��� �Լ����� ���� ����
public:  	int c; // ��� ������ ���� ����
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
	base.a = 10; // error. private ���
	base.b = 10; // error. protected 
	base.c = 10; // ok.    public  ���     
}