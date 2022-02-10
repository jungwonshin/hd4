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
template 
int square(int n)
{
	return n * n;
}

int main()
{
	square(3);
	square(3.4);
}