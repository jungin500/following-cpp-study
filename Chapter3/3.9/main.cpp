/*
 * Chapter 3.9 - ��Ʈ �÷���, ��Ʈ ����ũ ����
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