/*
 * Chapter 1.14 - 전처리기와의 첫 만남
 */

#include <iostream>
#include <algorithm>

using namespace std;

#define MAX(a, b) ((a>b)? a : b)
#define IS_WINDOWS_CONSOLE

void doSomething();

int main()
{
	// 구현한 코드보다 이미 있는 코드가 더 좋음!!
	// cout << MAX(1, 2) << endl;
	cout << std::max(1, 2) << endl;

	// 전처리기 (Preprocessor)에서 사용됨!
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