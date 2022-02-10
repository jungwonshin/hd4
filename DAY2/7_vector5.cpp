#include <iostream>

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
	~vector()
	{
		delete[] ptr;
	}

	void resize(int newsize)
	{
		if (newsize > size)
		{
			// � ������ �ڵ带 �ۼ��ؾ� �ϴ��� �׸��� �׷� ���� �����ϸ� �˴ϴ�
			int* temp = new int[newsize];

			memcpy(temp, ptr, sizeof(int) * size);

			delete[] ptr;

			ptr = temp;

			size = newsize;
		}
	}
};

int main()
{
	vector v(5); 
				
	v.resize(10);
}