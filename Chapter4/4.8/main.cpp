/*
 * Chapter 4.8 - ���� ���� ������ (������ Ŭ����)
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

// Class���� ���°�ó�� ����Ҽ� �ִ�!
// �� ���� �ٸ��� (Enum type 0�� �ƴϴ�!)
Color color = Color::RED;
Fruit fruit = Fruit::BANANA;

int main()
{
	using namespace std;

	return 0;
}