// 1_ȭ�Ϻ���2

// ���ϱ����� ������ ���� ��� ������ 2�� include �Ǵ� ������
// �߻��Ҽ� �ֽ��ϴ�.
//#include "Point.h" // 1. �����Ϸ��� Point.h ������ �����ؼ� ������ ���� �ɴϴ�.
//#include "Point.h" // 2. �����Ϸ��� Point.h ������ �����ؼ� ������ ���� �ɴϴ�.
					 // => �ᱹ Point.h ������ 2�� Open �ؼ� �о� �;� �մϴ�.
					 // => ������ �ð��� ���� �ɸ��� �˴ϴ�.

// #pragma once�� ������

// 1. ���ʿ� "Point.h" �� open �ϰ�, pragma once �� �ִ� ���� Ȯ���ϸ�
//    ==> Point.h ��  include �߾��ٰ� ����ϰ� �ֽ��ϴ�.

// 2. �ٽ� #include "Point.h" �ڵ尡 ������ �ٽ� ������ �����ϴ� ���� �ƴ϶�
//    �ش� ���� �����ϰ� �˴ϴ�.
//    ��, ������ �ӵ��� ���� ���ϴ�.

// ��� : pragma once �� include guard ���� �����ϴ�.
// ���� : C/C++ ǥ���� �ƴմϴ�. 
//       1. �������� Visual C++ �� �����߽��ϴ�.
//       2. ������ g++ �� �˴ϴ�.
//		 3. �������� �ʴ� �����Ϸ��� ������ �ֽ��ϴ�.
// 
// 
// �� �ڵ��� ȿ���� �ᱹ �Ʒ�ó�� Point.h �� 2�� ���̰� �˴ϴ�.

#ifndef POINT_H
#define POINT_H

class Point
{
	int x, y;
public:
	// Ŭ���� �ȿ��� ��� �Լ� ����
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
	// Ŭ���� �ȿ��� ��� �Լ� ����
	Point(int a, int b);
	~Point();
	void set(int a, int b);
};

#endif

int main()
{

}