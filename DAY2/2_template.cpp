// 2_template.cpp
/*
int square(int n)
{
	return n * n;
}
double square(double n)
{
	return n * n;
}
*/
// 구현이 동일한 함수가 여러개 필요 하다면
// "함수를 만들지 말고, 함수를 찍어낼때 사용할 "틀(template)"을 만들자
template<typename T>  
T square(T n)
{
	return n * n;
}
int main()
{
	// 템플릿(틀)을 사용하는 정확한 표기법
	square<int>(3);		// int square(int) 함수 생성
	square<double>(3.4);// double square(double) 함수 생성

	// 위 표기법이 정확한 표기법이지만, 타입인자 생략이 가능합니다.
	// 생략시 함수 인자를 가지고 타입이 결정됩니다.
	square(3); // 3이 int 이므로 컴파일러가
			   // square<int>(3) 으로 변경
}
// godbolt.org 에 접속해 보세요. => "compiler explorer" 사이트
// C/C++ 코드의 어셈블리 코드 확인 가능.

// 코드 폭발(Code Bloat)

// template 사용시 컴파일러가 너무 많은 버전의 함수를 생성해서
// 실행파일 크기가 커지고, 코드 메모리 사용량이 증가하는 현상
// 메모리가 부족한 임베디드 분야에서 조심해야 합니다.

// 하지만 요즘은 임베디드에서도 "template" 많이 사용