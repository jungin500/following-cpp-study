/*
 * Chapter 2.8 - 리터럴 상수
 */

#include <iostream>

int main()
{
	using namespace std;

	float pi = 3.14f; // float
	float long_pi = 3.14l; // Long double
	// int i = -1234u; // unsigned: 음수가 사라짐... 근데 컴파일 오류뜸
	int j = 12312313LL; // Long Long(Long도 가능)

	// 아래에서 정리!

	unsigned int n = 5u; // Unsigned이니까 U
	long n2 = 5L; // Long이니까 L
	double d = 6.0e-10; // E-표기법도 가능!!!

	// 수의 순서
	// Decimal:	0	1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16
	// Octal:	0	1	2	3	4	5	6	7	10	11	12	13	14	15	16	17	20
	// HexaDec:	0	1	2	3	4	5	6	7	8	9	A	B	C	D	E	F	10

	int o = 012; // 0은 8진수로 표현할때만 붙인다!!!!
	int x = 0x99; // 0x는 16진수로 표현할 때!
	int b = 0b1010; // 2진수
	int tb = 0b1111'1010'1111'1010'0001;	// 2진수 자리구분을 위해!! 가능!!!
											// singlequote는 컴파일러가 무시!
	int td = 49292'1242'1241'3333; // 이것도 마찬가지

	// 상수는 상수로 정의합시다
	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item;

	cout << o << ", " << x << endl;

	return 0;
}