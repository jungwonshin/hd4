// 3_static예제1
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
	// 아래 함수는 꼭 객체를 만든후 사용해야 할까요 ?
	// 객체 없이도 사용할수 있게 할까요 ?
	static int howManyDays(int m) { return days[m - 1]; }

	Date tomorrow()
	{
		Date temp(year, month, day + 1); // 이렇게 하면 안됩니다. 수정해 보세요
		return temp;
	}
	void print()
	{
		std::cout << year << "년 " << month << "월 " << day << "일" << std::endl;
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


int main()
{
	Date today(2022, 2, 11);
	Date d = today.afterDays(1000);

	int n1 = today.howManyDays(2); // 2월달이 몇일까지 있는지 알려주는 멤버 함수
					// 2월달이 몇일까지 있는지는 "오늘날짜(today)"와는 전혀 관계없습니다.
	int n2 = Date::howManyDays(2); // ok

	Date d2 = today.tomorrow(); // 이 함수는 static 으로 해야 할까요 ?
							   // static이 아니어야 할까요 ?
	d2.print();
}
