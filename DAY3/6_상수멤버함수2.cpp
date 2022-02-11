// ��� ��� �Լ��� ������ �ƴ� �ʼ� �����Դϴ�.
// ��� �Լ� ���鶧 ��ü�� ���¸� �������� ���� ��� ��� �Լ��� �ݵ�� 
// "��� ����Լ�"�� �ؾ� �մϴ�.
// getter(���� ��� "�ַ� get���� �����ϴ�" ��� �Լ�����) �ݵ�� ��� ��� �Լ��� �Ǿ�� �մϴ�

// ���� ���� : ���� ���� "Date" Ŭ������ ��� �Լ��� ������ const ����� ������ ������
// Date afterDays(int ds)    <== ���ϱ�� ? ����� ?
// Date d = today.afterDays(1000) <= today ��ü ���� ����ȵ�.. const �ٿ��� �մϴ�
//          today.setYear(2022)   <= ���� �����.. const ���̸� �ȵ˴ϴ�.

class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d)
	{
	}
	int getArea() const  { return w * h; }
};

//void foo(Rect r)      // call by value : ���纻�� �����մϴ�. user type �϶��� ���� ������� ������
void foo(const Rect& r) // const reference�� �����ϴ�.
{
	int n = r.getArea();
}
int main()
{
	Rect rc(1, 1, 10, 10);
	int n = rc.getArea();
	foo(rc);
}
// �� �ڵ��� ������ ������ ������..