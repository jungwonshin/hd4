// 4_oop1 - 
#include <iostream>

// �簢���� ������ ���ϴ� �Լ�
void getRectArea(int left, int top, int right, int bottom)
{
	return (right - left) * (bottom - top);
}

void drawRect()
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	int n = getRectArea(1, 1, 10, 10);
	drawRect();
}