#include <iostream>

int main()
{
	// 4. ����ڰ� -1�� �Է��Ҷ����� ��� �Է� �ް� �ʹ�.
	//    ��, �Էµ� ���� ���߿� ����ϱ� ���� �ݵ�� ���� �Ǿ�� �Ѵ�.

//	int score[5];  // �̷��� �ϸ�, ������ ������ �ֽ��ϴ�.
				   // �޸𸮸� ����� ������ ����� �����ϴ�.

	int size = 5;
	int* score = new int[size]; // �̷��� �ϸ� ���Ҷ� ����� �ֽ��ϴ�.

	int num = 0;
	int count = 0; // �Է��� ����

	while (1)
	{
		std::cin >> num;

		if (num == -1)
			break;

		score[count] = num;
		++count;
	}


}





