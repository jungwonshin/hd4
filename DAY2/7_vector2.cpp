#include <iostream>

int main()
{
	// 2. 사용자에게 "5개의 정수"를 입력 받고 싶다.
	int x[5];   


	// 3. 사용자가 입력한 학생 수 만큼 점수를 다시 입력 받고 싶다.
	int cnt = 0;
	std::cout << "학생수는 >> ";
	std::cin >> cnt;   // 20 입력

//	int score[cnt]; // error. 배열의 크기로 변수 안됩니다.

	// 원할때 원하는 크기 만큼 자유롭게 메모리 할당할수 있는 공간이 필요 하다.
	// "자유기억공간(힙, heap)"
	// C   : malloc() 함수 사용
	// C++ : new 로 할당.

	// 일반 변수 : 이름이 있으므로 이름으로 접근
	// 동적 할당 메모리 : 이름이 없습니다. 포인터 변수에 주소를 담아서 사용할수밖에
	//					없습니다.
	int* score = new int[cnt]; // 특징.변수를 넣을수 있습니다.

	// 포인터는 배열 처럼 사용해도 되므로 score를 배열 처럼 사용해도 됩니다.
	score[0] = 10;

	// 사용후에는 필요없다면 꼭 메모리 해지 해야 합니다.
	delete[] score;

}





