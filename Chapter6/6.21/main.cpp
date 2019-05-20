/*
 * Chapter 6.21 std::vector �Ұ�
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//std::vector<int> array;
	//std::vector<int> array2 = { 1, 2, 3, 4, 5 };
	//cout << array2.size() << endl;

	std::vector<int> arr = { 1, 2, 3, 4, 5 }; // Memory leak protected!

	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	arr.resize(10); // 10���� resize!
	// �������� 0���� ä����

	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	return 0;
}