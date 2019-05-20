/*
 * Chapter 6.11 �޸� ���� �Ҵ� new�� delete
 */

#include <iostream>

using namespace std;

int main()
{
	// int array[1000000]; // array allocation: Stack Overflow
	int* ptr = new (std::nothrow) int{ 7 }; // 4-byte dynamic heap allocation;
	// std::nothrow => ���� �Ҵ��� �Ұ����Ҷ��� nullptr�� �Ҵ��!
	
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
		int* ptr = new int; // �迡���������� ����ȴ�. �Ҿ������.....
		cout << ptr << endl;

		delete ptr;
	}

	//
	// Smart Pointer
	// ����: ���� �ӵ�...
	//

	return 0;
}