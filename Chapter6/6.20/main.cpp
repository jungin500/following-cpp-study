/*
 * Chapter 6.20 std::array �Ұ�
 */

#include <iostream>
#include <array>

using namespace std;

void printLength(const array<int, 5>& my_arr) // ������ call by reference��
{
	cout << my_arr.size() << endl;
}

int main()
{
	int array[5] = { 1, 2, 3, 4, 5 };

	std::array<int, 5> my_arr = { 1, 2, 3, 4, 5 };
	// my_arr = { 5, 6, 7, 8, 9, 10 }; // �� �������� �ȵ�!
	my_arr = { 1, 2, 3 }; // ������ ����

	cout << my_arr[10] << endl;
	cout << my_arr.at(10) << endl; // �ε����� �̻��ϸ� Exception handling

	// my_arr.size();
	// my_arr.at(int index); returns array values

	printLength(my_arr);	// ������ü�� call by value
							//but signature�� ���� call by reference

	std::sort(my_arr.begin(), my_arr.end());

	for (auto& element : my_arr)
		cout << element << ", ";
	cout << endl;

	return 0;
}