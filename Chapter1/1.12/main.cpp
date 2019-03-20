/*
 * Chapter 1.12 - 헤더 가드가 필요한 이유
 */

#include <iostream>
#include "add.h" // 이미 add.h로 `int add(int a, int b)` 함수의 정의를 하였다.

using namespace std;

int main()
{
	cout << add(1, 2) << endl;

	return 0;
}