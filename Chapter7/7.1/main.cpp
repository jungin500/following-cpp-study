/*
 * Chapter 7.3 참조에 의한 인수 전달
 */

#include <iostream>

using namespace std;
void addOne(int &y)
{
	// Reference이기 때문에 현재 Scope에서의 y (local variable)가 아닌
	// 원본 y가 바뀌게 된다. => int &y
	y = y + 1;
}

int main()
{
	// 참조에 의한 인수 전달 방식
	int x = 5;
	cout << x << endl;

	addOne(x);
	cout << x << endl;

	return 0;
}