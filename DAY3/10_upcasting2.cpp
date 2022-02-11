#include <vector>

class Animal
{
public:
	int age = 0;
};
class Dog : public Animal {};
class Cat : public Animal {};

void NewYear(Dog* p)
{
	++(p->age);
}
int main()
{
	Dog dog;
	Cat cat;
	NewYear(&dog);
	NewYear(&cat);

}