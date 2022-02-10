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
	vector<double> v(5); // 클래스 템플릿은 꼭 타입을 전달해야 합니다.

	v.setAt(0, 3.4);
	v.setAt(1, 2.1); 
	v.resize(10); 
	std::cout << v.getAt(1) << std::endl;  // 2.1

	vector<int> v2(10);
	v2.setAt(0, 3);
	std::cout << v2.getAt(0) << std::endl;
}
// vector 라는 타입이 생겼으므로..
// 크기가 변하는 배열이 필요할때 사용하면 됩니다.!!!
// OOP : 타입을 만들어서 활용하자!!!!

