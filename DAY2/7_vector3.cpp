#include <iostream>

int main()
{
	// 4. ����ڰ� -1�� �Է��Ҷ����� ��� �Է� �ް� �ʹ�.
	//    ��, �Էµ� ���� ���߿� ����ϱ� ���� �ݵ�� ���� �Ǿ�� �Ѵ�.

//	int score[5];  // �̷��� �ϸ�, ������ ������ �ֽ��ϴ�.
				   // �޸𸮸� ����� ������ ����� �����ϴ�.

	int size = 5;	//  ���� �Ҵ�� �迭 ũ��
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
		
		if (count == size)  // ����(�迭)�� ���� á��.!
		{
			int* temp = new int[size + 5];

			memcpy(temp, score, sizeof(int) * size);
				// �������ּ�, �����ּ�, ũ��

			delete[] score; // ���� �迭 ����
						// score�� ����°��� �ƴ϶�
						// score�� ���� �ּ��� �޸𸮸�����
			score = temp;
			size = size + 5;
		}
	}

	std::cout << "�Է��� ���� : " << count << std::endl;
	std::cout << "���� ���� �Ҵ�� �迭ũ�� : " << size << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << score[i] << ", ";
	}

	// ���̻� �ʿ������ �� �޸� �����ϼ���!!
	delete[] score; 
}

// �������� �е� : "�ڷᱸ��"��� ���� �н��� ������
//        �ڷᱸ�� : "����Ÿ�� �޸𸮿� ��� �����Ұ��ΰ�?"

// �� ������ "���� �迭(vector)" �̶�� �ڷᱸ���Դϴ�.




