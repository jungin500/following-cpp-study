/*
 * Chapter 6.12 동적 할당 배열
 */

#include <iostream>

using namespace std;

int main()
{
	int length;

	cin >> length;

	// int array[length]
	int* array = new int[length] {}; //  {} initializer => 나머지는 0으로 초기화됨

	array[0] = 1;
	0-=array[1] = 2;

	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t) & array[i] << endl;
		cout << array[i] << endl;
	}

	delete[] array;
	`9
	return 0;
}