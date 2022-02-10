// 3_nullptr1 - 54page
int main()
{
	// 리터럴(literal) : 10, 3.4 등 프로그램에서 사용하는 "값"
	// 모든 리터럴은 "타입"이 정해져 있습니다.
	int  n1 = 10; // ok.   10 은 정수(int) 입니다. 
	int* p1 = 10; // error. 

	int  n2 = 0; // ok. 0은 정수(int) 입니다.
	int* p2 = 0; // ok. 0은 컴파일러에 의해 특수하게 처리됩니다.

	// C++11 에서 "포인터 0"을 의미하는 키워드 등장
	int* p3 = nullptr;
	int  n3 = nullptr; // error. nullptr은 포인터 초기화에만 사용됩니다.
}