/*
 * Chapter 7.3 ������ ���� �μ� ����
 */

#include <iostream>

using namespace std;
void addOne(int &y)
{
	// Reference�̱� ������ ���� Scope������ y (local variable)�� �ƴ�
	// ���� y�� �ٲ�� �ȴ�. => int &y
	y = y + 1;
}

int main()
{
	// ������ ���� �μ� ���� ���
	int x = 5;
	cout << x << endl;

	addOne(x);
	cout << x << endl;

	return 0;
}