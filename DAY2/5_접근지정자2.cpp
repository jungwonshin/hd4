#include <string>

// struct : ���� ������ ������ public �Դϴ�.
// class  : ���� ������ ������ private �Դϴ�.

// C++ : struct �� class ���̴� �� �Ѱ����� �ٸ��� ������ �����մϴ�.
// 
// �ٸ� ���(C#, java��) : �������� �� ū ���Դϴ�.

//struct Person
class Person
{
//private:
	std::string name;
	int age;

public:	
	void setAge(int value)
	{
		if (value > 0 && value < 150)
			age = value;
	}
};
int main()
{
	Person p;
	p.setAge(-10);
}