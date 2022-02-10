#include <iostream>

class Object
{
	int a;
	int b;
	const int c;
public:
	Object(int value)
	{
		c = value; // µÉ±î¿ä ?
	}
};
int main()
{
	Object obj(10);
}