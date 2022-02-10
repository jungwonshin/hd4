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