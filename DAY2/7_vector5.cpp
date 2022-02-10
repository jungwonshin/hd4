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
			// 어떤 순서로 코드를 작성해야 하는지 그림을 그려 놓고 생각하면 됩니다
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