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
// ������ ������ �Լ��� ������ �ʿ� �ϴٸ�
// "�Լ��� ������ ����, �Լ��� ���� ����� "Ʋ(template)"�� ������
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