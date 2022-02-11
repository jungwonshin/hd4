#include <vector>

class Animal
{
public:
	int age = 0;
};
class Dog : public Animal {};
class Cat : public Animal {};

// void NewYear(Dog* p) // Dog �� ó���ϴ� �Լ� 
void NewYear(Animal* p) // ����(���� ��� Ŭ������ ����ϴ� Ÿ��)�� ���� �����ϴ� �Լ�
{
	++(p->age);
	// ��, ���⼭�� Animal �� ����� ��밡���մϴ�.
	// �ǵ� ��ü�� ��� ������ ������ �۾��� �ϰڴٴ� ��.
}

int main()
{
	Dog dog;
	Cat cat;
	NewYear(&dog);
	NewYear(&cat);

//	std::vector<Dog*> v1;    // Dog �� ���� ������ vector
	std::vector<Animal*> v2; // ������ �����ϴ� vector
}