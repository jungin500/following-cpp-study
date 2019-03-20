/*
 * Chapter 2.9 - �ɺ��� ���
 *
 * �ٲܼ� ���� ����� �ٷ�� �� ���.
 */
#include <iostream>
#include "constants_my.h"

using namespace std;

// ���� Parameter�� �ٲٰ� ���� �ʾ��Ѵ�.
// ���� Parameter�� ������ ���� �״�� �������⸦ ���Ѵ� (����� ���� �ƴ�)
void printNumber(const int& my_number)
{
	// my_number = ???;
	cout << my_number << endl;
}

int main()
{
	// ========================================= //
	// [1] ����� ���ؼ�

	/* 1. ������ Ÿ�� ��� */
	// ������ �ٲٴ� ���� ����� ������
	// �����ϸ鼭 �ݵ�� ���� �����ؾ� �Ѵ�!
	const double gravity{ 9.8 };
	double const gravity2{ 9.8 };

	int number;
	cin >> number;

	/* 2. ��Ÿ�� Ÿ�� ��� */
	const int special_number(number);

	//** ������Ÿ�Կ� ���� �����Ǵ� ���� �̸� üũ�Ҽ� �ִ�!! (constexpr)
	constexpr int my_const(123); // ����
	// constexpr int runtime_const(number); // �Ұ���!!!

	// ========================================= //
	// [2] ��ũ�� ��� or ��� ���?

// #define PRICE_PER_ITEM 10 // �̷��� ���߿� �����ϴ�. ������ �ٽ� �Դٰ���...

	constexpr int PRICE_PER_ITEM = 30;

	int num_item = 123;
	int price = num_item = PRICE_PER_ITEM; // �̷��� �ϸ� ������.

	cout >> constants::moon_gravity * number >> endl;


	return 0;
}