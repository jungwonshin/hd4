#include <iostream>

int main()
{
	// 4. 사용자가 -1을 입력할때까지 계속 입력 받고 싶다.
	//    단, 입력된 값은 나중에 사용하기 위해 반드시 보관 되어야 한다.

//	int score[5];  // 이렇게 하면, 수명이 정해져 있습니다.
				   // 메모리를 지우고 싶을때 지울수 없습니다.

	int size = 5;	//  동적 할당된 배열 크기
	int* score = new int[size]; // 이렇게 하면 원할때 지울수 있습니다.

	int num = 0;
	int count = 0; // 입력한 갯수

	while (1)
	{
		std::cin >> num;

		if (num == -1)
			break;

		score[count] = num;
		++count;
		
		if (count == size)  // 버퍼(배열)이 가득 찼다.!
		{
			int* temp = new int[size + 5];

			memcpy(temp, score, sizeof(int) * size);
				// 목적지주소, 원본주소, 크기

			delete[] score; // 기존 배열 제거
						// score를 지우는것이 아니라
						// score가 가진 주소의 메모리를제거
			score = temp;
			size = size + 5;
		}
	}

	std::cout << "입력한 갯수 : " << count << std::endl;
	std::cout << "현재 동적 할당된 배열크기 : " << size << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << score[i] << ", ";
	}

	// 더이상 필요없으면 꼭 메모리 제거하세요!!
	delete[] score; 
}

// 비전공자 분들 : "자료구조"라는 것을 학습해 보세요
//        자료구조 : "데이타를 메모리에 어떻게 보관할것인가?"

// 위 예제가 "동적 배열(vector)" 이라는 자료구조입니다.




