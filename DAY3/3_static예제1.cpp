// 3_static����1
#include <iostream>

// ���α׷����� "��¥" �� ���� �ٷ�� �ȴ�.
// ==> "Date" Ÿ���� ���� ����.

// �� ���� ��¥��.
// int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
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
	// �ִ��� â�Ƿ��� �����ؼ�, ����ڵ��� �����Ҹ��� �پ��� ��� �Լ��� �����ؾ� �մϴ�.
	// ����ɷ�!!
	Date afterDays(int ds)
	{
		// �Ʒ� ������ Ʋ���ϴ�. ������ ������ ������.. 
		Date temp(year, month, day + ds);
		return temp;
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


int main()
{
	Date today(2022, 2, 11);
	Date d = today.afterDays(1000);
}