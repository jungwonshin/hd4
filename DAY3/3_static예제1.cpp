// 3_static예제1
#include <iostream>

// 프로그램에서 "날짜" 를 많이 다루게 된다.
// ==> "Date" 타입을 설계 하자.

// 각 월별 날짜수.
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
	// 최대한 창의력을 발휘해서, 사용자들이 좋아할만한 다양한 멤버 함수를 제공해야 합니다.
	// 설계능력!!
	Date afterDays(int ds)
	{
		// 아래 구현을 틀립니다. 숙제로 도전해 보세요.. 
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