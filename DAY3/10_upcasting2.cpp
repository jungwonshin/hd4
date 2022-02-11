#include <vector>

class Animal
{
public:
	int age = 0;
};
class Dog : public Animal {};
class Cat : public Animal {};

// void NewYear(Dog* p) // Dog 만 처리하는 함수 
void NewYear(Animal* p) // 동종(동일 기반 클래스를 사용하는 타입)에 대해 동작하는 함수
{
	++(p->age);
	// 단, 여기서는 Animal 의 멤버만 사용가능합니다.
	// 의도 자체가 모든 동물의 공통의 작업만 하겠다는 것.
}

int main()
{
	Dog dog;
	Cat cat;
	NewYear(&dog);
	NewYear(&cat);

//	std::vector<Dog*> v1;    // Dog 만 저장 가능한 vector
	std::vector<Animal*> v2; // 동종을 저장하는 vector
}