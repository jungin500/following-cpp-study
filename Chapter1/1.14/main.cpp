/*
 * Chapter 1.14 - ��ó������� ù ����
 */

#include <iostream>
#include <algorithm>

using namespace std;

#define MAX(a, b) ((a>b)? a : b)
#define IS_WINDOWS_CONSOLE

void doSomething();

int main()
{
	// ������ �ڵ庸�� �̹� �ִ� �ڵ尡 �� ����!!
	// cout << MAX(1, 2) << endl;
	cout << std::max(1, 2) << endl;

	// ��ó���� (Preprocessor)���� ����!
	// Conditional Compilation
#ifdef IS_WINDOWS_CONSOLE
	cout << "You're using Windows Console!" << endl;
	doSomething();
// #endif
#else
// #ifndef IS_WINDOWS_CONSOLE
	cout << "This is NOT a windows console." << endl;
#endif


	return 0;
}