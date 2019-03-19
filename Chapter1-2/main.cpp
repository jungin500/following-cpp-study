/*
 * Hello World
 *
 * LimeOrangePie
 */

#include <iostream>

int main(void)
{
	int x = 2;
	x = 5;
	int y = x + 3;

	// WRONG: Print out result of 1 + 2 (which is 3)
	// 코드로 알수 있는 부분은 안써도 된다
	std::cout << 1 + 2 << std::endl;

	int sight = 10;
	sight = 0; // 이런것도 주석이 필요없다.

	int n_items = 10, price_per_item = 10000;

	// 1 + 1 event
	int cost = n_items / 2 * price_per_item;

	return 0;
}