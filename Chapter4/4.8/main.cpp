/*
 * Chapter 4.8 - 영역 제한 열거형 (열거형 클래스)
 */

#include <iostream>

// Enumeration
/*
enum Color
{
	RED,
	BLUE
};

enum Fruit
{
	BANANA,
	APPLE
};
*/

enum class Color
{
	RED,
	BLUE
};

enum class Fruit
{
	BANANA,
	APPLE
};

// Class에서 쓰는것처럼 사용할수 있다!
// 두 개는 다르다 (Enum type 0가 아니다!)
Color color = Color::RED;
Fruit fruit = Fruit::BANANA;

int main()
{
	using namespace std;

	return 0;
}