/*
 * Chapter 2.9 - 심볼릭 상수
 *
 * 바꿀수 없는 상수를 다뤄야 할 경우.
 */
#include <iostream>
#include "constants_my.h"

using namespace std;

// 보통 Parameter는 바꾸고 싶지 않아한다.
// 또한 Parameter는 원래의 값을 그대로 가져오기를 원한다 (복사된 값이 아닌)
void printNumber(const int& my_number)
{
	// my_number = ???;
	cout << my_number << endl;
}

int main()
{
	// ========================================= //
	// [1] 상수에 대해서

	/* 1. 컴파일 타임 상수 */
	// 순서를 바꾸는 것은 상관이 없으나
	// 선언하면서 반드시 값을 선언해야 한다!
	const double gravity{ 9.8 };
	double const gravity2{ 9.8 };

	int number;
	cin >> number;

	/* 2. 런타임 타입 상수 */
	const int special_number(number);

	//** 컴파일타입에 값이 결정되는 것은 미리 체크할수 있다!! (constexpr)
	constexpr int my_const(123); // 가능
	// constexpr int runtime_const(number); // 불가능!!!

	// ========================================= //
	// [2] 매크로 사용 or 상수 사용?

// #define PRICE_PER_ITEM 10 // 이런건 나중에 불편하다. 맨위로 다시 왔다갔다...

	constexpr int PRICE_PER_ITEM = 30;

	int num_item = 123;
	int price = num_item = PRICE_PER_ITEM; // 이렇게 하면 괜찮다.

	cout >> constants::moon_gravity * number >> endl;


	return 0;
}