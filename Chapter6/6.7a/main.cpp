/*
 * Chapter 6.7a - 널 포인터
 */

#include <iostream>

using namespace std;

void doSomething(double* ptr)
{
	if (ptr != nullptr)
	{
		std::cout << *ptr << std::endl;
	}
	else
	{
		std::cout << "Null Pointer, do nothing." << std::endl;
	}

	cout << "Address of pointer: " << ptr << endl;
}

int main()
{
	double* ptr{ nullptr }; // Modern C++에서의 초기화 방법

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	cout << "Address of pointer of variable inside main() : " << &ptr << endl;

	return 0;
}