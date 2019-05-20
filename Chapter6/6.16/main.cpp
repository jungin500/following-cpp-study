/*
 * Chapter 6.16 포인터와 참조의 멤버 선택
 */

#include <iostream>

using namespace std;

class Person {
public:
	int age;
	int weight;
};

int main()
{
	Person person;

	person.age = 5;
	person.weight = 30;

	Person& ref = person;
	ref.age = 15;

	Person* ptr = &person;
	ptr->age = 30; // 포인터에 대한 접근
	(*ptr).age = 20; // 포인터에 대한 접근 2

	Person& ref2 = *ptr;
	ref2.age = 45;

	std::cout << &person << std::endl;
	std::cout << &ref2 << std::endl;
	return 0;
}