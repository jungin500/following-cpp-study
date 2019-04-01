/*
 * Chapter 4.4 - auto Ű����� �ڷ��� �߷�
 */

#include <iostream>

// Return���� auto���� �����ϴ�.
auto add(int x, int y)
{
	return x + y;
}

// Int������ ���ϵȴٴ� ���� �˼� ���� (Trailing return type)
auto add(double x, double y) -> int
{
	return x + y;
}

// �׸��� �׷��ٿ� ���ø��� ����
/*
template <typename T>
auto add(T x, T y) {
	return x + y;
}
*/

int main()
{
	using namespace std;

	int a = 123; // ������ int��!
	auto a = 123; // �̰� auto���� int������ �ڵ� ����!
	// auto b; // �� ������ �ʿ���!

	return 0;
}