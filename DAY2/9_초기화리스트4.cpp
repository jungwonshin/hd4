#include <iostream>

class Object
{
	int a;
	int b;
	const int c;
public:
	Object(int value)
	{
		c = value; // �ɱ�� ?
	}
};
int main()
{
	Object obj(10);
}