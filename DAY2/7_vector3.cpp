#include <iostream>

int main()
{
	// 4. 사용자가 -1을 입력할때까지 계속 입력 받고 싶다.
	//    단, 입력된 값은 나중에 사용하기 위해 반드시 보관 되어야 한다.

//	int score[5];  // 이렇게 하면, 수명이 정해져 있습니다.
				   // 메모리를 지우고 싶을때 지울수 없습니다.

	int size = 5;
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
	}


}





