/*
 * Chapter 4.4 - auto 키워드와 자료형 추론
 */

#include <iostream>

// Return값도 auto형이 가능하다.
auto add(int x, int y)
{
	return x + y;
}

// Int형으로 리턴된다는 것을 알수 있음 (Trailing return type)
auto add(double x, double y) -> int
{
	return x + y;
}

// 그리고 그럴바엔 템플릿을 쓰지
/*
template <typename T>
auto add(T x, T y) {
	return x + y;
}
*/

int main()
{
	using namespace std;

	int a = 123; // 무조건 int형!
	auto a = 123; // 이건 auto지만 int형으로 자동 결정!
	// auto b; // 형 결정이 필요함!

	return 0;
}