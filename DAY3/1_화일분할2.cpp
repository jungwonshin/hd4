// 1_화일분할2

// 파일구조가 복잡해 지면 헤더 파일이 2번 include 되는 현상이
// 발생할수 있습니다.
//#include "Point.h" // 1. 컴파일러가 Point.h 파일을 오픈해서 내용을 가져 옵니다.
//#include "Point.h" // 2. 컴파일러가 Point.h 파일을 오픈해서 내용을 가져 옵니다.
					 // => 결국 Point.h 파일이 2번 Open 해서 읽어 와야 합니다.
					 // => 컴파일 시간에 오래 걸리게 됩니다.

// #pragma once가 있으면

// 1. 최초에 "Point.h" 을 open 하고, pragma once 가 있는 것을 확인하면
//    ==> Point.h 을  include 했었다고 기억하고 있습니다.

// 2. 다시 #include "Point.h" 코드가 나오면 다시 파일을 오픈하는 것이 아니라
//    해당 줄을 무시하게 됩니다.
//    즉, 컴파일 속도가 빨라 집니다.

// 결론 : pragma once 가 include guard 보다 좋습니다.
// 단점 : C/C++ 표준이 아닙니다. 
//       1. 예전에는 Visual C++ 만 가능했습니다.
//       2. 요즘은 g++ 도 됩니다.
//		 3. 지원되지 않는 컴파일러도 있을수 있습니다.
// 
// 
// 위 코드의 효과는 결국 아래처럼 Point.h 가 2번 놓이게 됩니다.

#ifndef POINT_H
#define POINT_H

class Point
{
	int x, y;
public:
	// 클래스 안에는 멤버 함수 선언만
	Point(int a, int b);
	~Point();
	void set(int a, int b);
};

#endif

#ifndef POINT_H
#define POINT_H

class Point
{
	int x, y;
public:
	// 클래스 안에는 멤버 함수 선언만
	Point(int a, int b);
	~Point();
	void set(int a, int b);
};

#endif

int main()
{

}