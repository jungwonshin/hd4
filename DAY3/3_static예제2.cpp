// 3_static����1
#include <iostream>

class Date
{
	int year;
	int month;
	int day;
	static int days[12];
public:
	Date(int y, int m, int d) : year(y), month(m), day(d)
	{
	}
	Date afterDays(int ds)
	{

		Date temp(year, month, day + ds);
		return temp;
	}
	// �Ʒ� �Լ��� �� ��ü�� ������ ����ؾ� �ұ�� ?
	// ��ü ���̵� ����Ҽ� �ְ� �ұ�� ?
	static int howManyDays(int m) { return days[m - 1]; }

	Date tomorrow()
	{
		Date temp(year, month, day + 1); // �̷��� �ϸ� �ȵ˴ϴ�. ������ ������
		return temp;
	}
	void print()
	{
		std::cout << year << "�� " << month << "�� " << day << "��" << std::endl;
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


int main()
{
	Date today(2022, 2, 11);
	Date d = today.afterDays(1000);

	int n1 = today.howManyDays(2); // 2������ ���ϱ��� �ִ��� �˷��ִ� ��� �Լ�
					// 2������ ���ϱ��� �ִ����� "���ó�¥(today)"�ʹ� ���� ��������ϴ�.
	int n2 = Date::howManyDays(2); // ok

	Date d2 = today.tomorrow(); // �� �Լ��� static ���� �ؾ� �ұ�� ?
							   // static�� �ƴϾ�� �ұ�� ?
	d2.print();
}
