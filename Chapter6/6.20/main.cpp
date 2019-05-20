/*
 * Chapter 6.20 std::array 소개
 */

#include <iostream>
#include <array>

using namespace std;

void printLength(const array<int, 5>& my_arr) // 강제로 call by reference임
{
	cout << my_arr.size() << endl;
}

int main()
{
	int array[5] = { 1, 2, 3, 4, 5 };

	std::array<int, 5> my_arr = { 1, 2, 3, 4, 5 };
	// my_arr = { 5, 6, 7, 8, 9, 10 }; // 더 많을때는 안됨!
	my_arr = { 1, 2, 3 }; // 적은건 노상관

	cout << my_arr[10] << endl;
	cout << my_arr.at(10) << endl; // 인덱스가 이상하면 Exception handling

	// my_arr.size();
	// my_arr.at(int index); returns array values

	printLength(my_arr);	// 변수자체는 call by value
							//but signature에 의해 call by reference

	std::sort(my_arr.begin(), my_arr.end());

	for (auto& element : my_arr)
		cout << element << ", ";
	cout << endl;

	return 0;
}