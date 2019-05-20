/*
 * Chapter 6.17 C++11 For-each �ݺ���
 */

#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	// Manipulation
	//for (auto& number : fibonacci)  // auto�� �ַ� ���
	//	number = 10; // const auto& number�϶��� ������ �ȵ�!!

	// Output
	for (const auto number : fibonacci) // auto�� �ַ� ���
		cout << number << endl;
	cout << endl;
	cout << endl;

	int max_number = std::numeric_limits<int>::lowest(); // Lowest integer possible

	for (const auto& n : fibonacci)
		max_number = std::max(max_number, n);

	cout << max_number << endl;

	// 
	// Vector array
	//

	// ������ initializer�� �� element�� �����ϴ� ���� �����ϴ�.
	std::vector<int> fibonacci2 = { 0, 1, 1, 2, 300, 5, 8, 13, 2 };

	return 0;
}