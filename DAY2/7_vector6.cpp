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
			int* temp = new int[newsize];
			memcpy(temp, ptr, sizeof(int) * size);
			delete[] ptr;
			ptr = temp;
			size = newsize;
		}
	}

	void setAt(int idx, int value)
	{
		ptr[idx] = value; 
		// 0 <= idx < size 를 확인해서 에러처리 하면 더욱좋습니다.
	}
	int getAt(int idx) { return ptr[idx]; }
};

int main()
{
	vector v(5);

	// 진짜배열은 []로 접근하지만, 
	// 우리가 만든것은 setAt(), getAt()으로 접근하게 만들어 봅시다

	v.setAt(0, 10);
	v.setAt(1, 20); // "v[1] = 20" 의 의미.

	v.resize(10); // 크기를 변경

	std::cout << v.getAt(1) << std::endl; // 20 나와야 합니다.
}