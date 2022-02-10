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
template<typename T>  
T square(T n)
{
	return n * n;
}
int main()
{
	// ���ø�(Ʋ)�� ����ϴ� ��Ȯ�� ǥ���
	square<int>(3);		// int square(int) �Լ� ����
	square<double>(3.4);// double square(double) �Լ� ����

	// �� ǥ����� ��Ȯ�� ǥ���������, Ÿ������ ������ �����մϴ�.
	// ������ �Լ� ���ڸ� ������ Ÿ���� �����˴ϴ�.
	square(3); // 3�� int �̹Ƿ� �����Ϸ���
			   // square<int>(3) ���� ����

}