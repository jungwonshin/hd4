// 6_������3 - 78page �����Դϴ�
#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 1. ��ü ������ �ݵ�� �����ڰ� ȣ��Ǿ�� �մϴ�
	// 2. ����ڰ� �����ڸ� �Ѱ��� ������ ������ �����Ϸ��� ���� ���� ������ ����
	//    ==> "����Ʈ ������" : ���ڰ� ���� ������
	Point()             { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};
int main()
{
	Point p1;
	Point p2(1,2);
//	Point p3(1);	// error. ���ڰ� �Ѱ��� �����ڴ� �����ϴ�.
	//--------------------------

	Point arr1[5]; // 1�� ������ 5ȸ ȣ��
	Point arr2[5] = { {1,1},{2,2} }; // 2�� ������ 2ȸ, 1�������� 3ȸ


	Point* p; // ��ü ������ �ƴմϴ�. ������ ȣ�� �ȵ�.

	p = static_cast<Point*>( malloc(sizeof(Point)) ); // 1. 8����Ʈ �޸��Ҵ��ض�
													  // 2. Point ��ü �����ض�
													  // ���� >> 1
	free(p);

	p = new Point; // Point ��ü �Ѱ��� ���� �Ҵ��ض�!! ������ ȣ��
	delete p;

	p = new Point(1, 2); // 2�� ������
	delete p;
	
	// �׷���, C++������ ��ü ������ malloc ��� new�� ����ؾ� �մϴ�
}
