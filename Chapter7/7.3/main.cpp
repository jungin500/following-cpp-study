/*
 * Chapter 7.3 ������ ���� �μ� ����
 */

#include <iostream>
#include <vector>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y; // �������� (local scope): �ش� �Լ��� ���� �� �����
} // x and y is destroyed here

// �Ϲ������� �Է��� �տ�, ����� �ڿ� �ΰ� �ȴ�.
// const���� ref�� ������ ����� Ȯ���� ����
void getSinCos(const double degress, double& sin_out, double& cos_out) // const�� ���� ����
{
	// sin_out�� cos_out�� call by ref�� ���������ν�
	// ���� ���ڷ� ��ȯ�ϰ� �ȴ�.
	static const double pi = 3.141592;
	double radians = degress * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

typedef int* pint;
void add(pint number)
{
	(*number)++;
}

// �ν��Ͻ��� �ٷ� ������?
void printElement(vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
		cout << arr.at(i) << ((i == arr.size() - 1) ? "" : ", ");
							// ��ȣ�� ġ�� ������ return���� (i == arr.size() - 1)�� �Ǿ����...
	cout << endl;
}

int main()
{
	int x = 1, y = 2;
	foo(6, 7); // 6, 7 => argument(������, actual parameters)
	foo(x, y + 1);

	double sin(0.0);
	double cos(0.0);
	getSinCos(0.0, sin, cos);

	// Integer pointer
	int a = 100;
	add(&a);

	cout << "a: " << a << endl;

	// Testing printElement
	vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printElement(arr);

	return 0;
}