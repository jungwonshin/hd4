// 5_���������� - 74page
#include <string>

// �ٽ� : Ÿ���� ���鶧 "����ϱ� ����", "�����ϰ�" ������ �Ѵ�.

struct Person
{
private:				// private ���� : ����Լ������� ���� ����
						//				 ����Լ��� �ƴѰ����� ���ٽ� ����
	std::string name;
	int age;

public:					// public ���� : ��� ������ ���� ����.
	void setAge(int value)
	{
		age = value;
	}
};

int main()
{
	Person p;

//	p.age = -10; // Person Ÿ�� ����ڰ� �Ǽ� �ߴ�.
				 // ���Ǽ��迡 �����Ҽ� ���� ��ü�� ����
				 // private ������ error.
	p.setAge(-10);
}