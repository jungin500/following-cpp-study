/*
 * Chapter 7.3 참조에 의한 인수 전달
 */

#include <iostream>
#include <vector>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y; // 지역변수 (local scope): 해당 함수가 끝날 때 사라짐
} // x and y is destroyed here

// 일반적으로 입력을 앞에, 출력을 뒤에 두게 된다.
// const없이 ref만 있으면 출력일 확률이 높다
void getSinCos(const double degress, double& sin_out, double& cos_out) // const로 변경 방지
{
	// sin_out과 cos_out을 call by ref로 지정함으로써
	// 값읇 인자로 반환하게 된다.
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

// 인스턴스를 다룰 때에는?
void printElement(vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
		cout << arr.at(i) << ((i == arr.size() - 1) ? "" : ", ");
							// 괄호를 치지 않으면 return값이 (i == arr.size() - 1)이 되어버림...
	cout << endl;
}

int main()
{
	int x = 1, y = 2;
	foo(6, 7); // 6, 7 => argument(실인자, actual parameters)
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