/*
 * Chapter 6.7a - �� ������
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
	double* ptr{ nullptr }; // Modern C++������ �ʱ�ȭ ���

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	cout << "Address of pointer of variable inside main() : " << &ptr << endl;

	return 0;
}