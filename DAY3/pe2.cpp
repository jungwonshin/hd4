// pe2.cpp
#include <iostream>

int g = 10;

int main()
{
	int n = 0;
	int* p = new int;

	// �Ʒ� ����� ������ �ּҸ� ������ ������. ������ �ּҰ� � ������ �� ������
	printf("main �Լ� �ּ� : %p\n", &main);
	printf("�������� �ּ�  : %p\n", &g);
	printf("�������� �ּ�  : %p\n", &n);
	printf("���� �Ҵ�� �޸� �ּ�: %p\n", p); // ���� &p �� �ƴ� p �Դϴ�.

	delete p;
}