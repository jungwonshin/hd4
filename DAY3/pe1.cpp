// pe1.cpp
#include <cstdio>

int g1 = 0x11223344;
int g2 = 0x99887766;

void foo()
{
	int a = 0;
	printf("hello\n");
}

int main()
{
	int n = 10;

	printf("hello\h");

	foo();
}