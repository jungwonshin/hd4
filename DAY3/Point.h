// Point.h
#pragma once

class Point
{
	int x, y;
public:
	// 클래스 안에는 멤버 함수 선언만
	Point(int a, int b);
	~Point();
	void set(int a, int b);
};
