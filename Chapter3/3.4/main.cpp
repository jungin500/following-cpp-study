/*
 * Chapter 3.4 - sizeof, 쉼표 연산자, 조건부 연산자
 */

#include <iostream>

int main()
{
	using namespace std;

	// float a;

	cout << sizeof(float) << endl; // 4
	// cout << sizeof(a); // 4

	int x = 3;
	int y = 10;

	int a = 1, b = 2;
	int z;

	z = (a, a + b); // (3)...

	cout << z << endl;

	++x;
	++y;

	// int z = y;

	cout << x << " " << y << " " << z << endl;

	// Conditional Operator
	int a = (true) ? 1 : 2;

	// Equals
	if (true)
		a = 1;
	else
		a = 2;

	return 0;
}