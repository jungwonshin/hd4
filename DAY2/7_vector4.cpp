#include <iostream>

// ��ü�������α׷���(Object Oriented Programming, OOP)
// => �ʿ��� Ÿ���� ���� ��������.

// "Point", "Rect", "Person" ���� �͸� ����� ���� �ƴմϴ�.
// ���� �پ��� ������ Ÿ���� �����Ҽ� �ֽ��ϴ�.

// ���� �迭(vector) �� Ÿ������ ������ ���ô�.

class vector
{
	int* ptr;
	int size;
public:
	vector(int sz)
	{
		size = sz;
		ptr = new int[sz];
	}
	// �� Ŭ������ �����ڿ��� �ڿ��Ҵ�(�޸��Ҵ�)�� �ϰ� �ֽ��ϴ�.
	// �� ��� ��κ� �Ҹ��ڸ� ���� �޸� ������ �ؾ� �մϴ�.
	~vector()
	{
		delete[] ptr;
	}
};

int main()
{
	vector v(5); // 5�� ¥�� ���� �迭. �̼��� �޸� �׸��� �׸�����
				//					  ������ �ڵ尡 ����Ǵ� �ͱ��� �׸�����.
//	v.resize(10);// 10���� ũ�� ����.
}