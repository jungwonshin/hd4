#include <iostream>

template<typename T>
class vector
{
	T* ptr;
	int size;
public:
	vector(int sz)
	{
		size = sz;
		ptr = new T[sz];
	}
	~vector()
	{
		delete[] ptr;
	}

	void resize(int newsize)
	{
		if (newsize > size)
		{
			T* temp = new T[newsize];

			memcpy(temp, ptr, sizeof(T) * size);
			delete[] ptr;
			ptr = temp;
			size = newsize;
		}
	}
	void setAt(int idx, T value)
	{
		ptr[idx] = value;
	}
	T getAt(int idx) { return ptr[idx]; }
};
int main()
{
	vector<double> v(5); // Ŭ���� ���ø��� �� Ÿ���� �����ؾ� �մϴ�.

	v.setAt(0, 3.4);
	v.setAt(1, 2.1); 

	v.resize(10); 

	std::cout << v.getAt(1) << std::endl;  // 2.1
}