#include <string>

// C++
class Person
{
private:
	std::string name;
	int age;
public:
	void setAge(int value)
	{
		if (value > 0 && value < 150)
			age = value;
	}
};

// �ٸ� ��ü���� ���� ��� ����� ���� �����մϴ�.(java, C# ���� ��κа�ü������)
class Person
{
	private std::string name;
	private int age;
	public void setAge(int value)
	{
		if (value > 0 && value < 150)
			age = value;
	}
};
// ���̽㵵 Ŭ������ ����� ������ "���������� ������ �����ϴ�" 
// => �����ڰ� ������ ���� ���� ������ ���� ä�� �ȵ�.