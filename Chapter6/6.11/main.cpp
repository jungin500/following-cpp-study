/*
 * Chapter 6.11 메모리 동적 할당 new와 delete
 */

#include <iostream>

using namespace std;

int main()
{
	// int array[1000000]; // array allocation: Stack Overflow
	int* ptr = new (std::nothrow) int{ 7 }; // 4-byte dynamic heap allocation;
	// std::nothrow => 동적 할당이 불가능할때는 nullptr가 할당됨!
	
	cout << "Address: " << ptr << endl;
	cout << "Data: " << *ptr << endl;

	delete ptr;
	ptr = nullptr; // Workaround!

	// after delete
	if (ptr) { // ptr != nullptr
		cout << "Address: " << ptr << endl;
		cout << "Data: " << *ptr << endl; // Problemetic!
	}

	//
	// Memory Leak
	//
	while (true)
	{
		int* ptr = new int; // 계에에에에에속 실행된다. 잃어버리고.....
		cout << ptr << endl;

		delete ptr;
	}

	//
	// Smart Pointer
	// 단점: 느린 속도...
	//

	return 0;
}