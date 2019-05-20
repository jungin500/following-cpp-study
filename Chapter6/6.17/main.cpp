/*
 * Chapter 6.17 C++11 For-each 반복문
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
	//for (auto& number : fibonacci)  // auto로 주로 사용
	//	number = 10; // const auto& number일때는 변경이 안됨!!

	// Output
	for (const auto number : fibonacci) // auto로 주로 사용
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

	// 벡터의 initializer로 그 element를 설정하는 것이 가능하다.
	std::vector<int> fibonacci2 = { 0, 1, 1, 2, 300, 5, 8, 13, 2 };

	return 0;
}