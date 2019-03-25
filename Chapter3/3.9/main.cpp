/*
 * Chapter 3.9 - 비트 플래그, 비트 마스크 사용법
 */

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	const unsigned char opt0 = 1 << 0;
	unsigned char items_flag = 0;

	cout << bitset<8>(items_flag) << endl;

	return 0;
}