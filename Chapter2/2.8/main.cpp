/*
 * Chapter 2.8 - ���ͷ� ���
 */

#include <iostream>

int main()
{
	using namespace std;

	float pi = 3.14f; // float
	float long_pi = 3.14l; // Long double
	// int i = -1234u; // unsigned: ������ �����... �ٵ� ������ ������
	int j = 12312313LL; // Long Long(Long�� ����)

	// �Ʒ����� ����!

	unsigned int n = 5u; // Unsigned�̴ϱ� U
	long n2 = 5L; // Long�̴ϱ� L
	double d = 6.0e-10; // E-ǥ����� ����!!!

	// ���� ����
	// Decimal:	0	1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16
	// Octal:	0	1	2	3	4	5	6	7	10	11	12	13	14	15	16	17	20
	// HexaDec:	0	1	2	3	4	5	6	7	8	9	A	B	C	D	E	F	10

	int o = 012; // 0�� 8������ ǥ���Ҷ��� ���δ�!!!!
	int x = 0x99; // 0x�� 16������ ǥ���� ��!
	int b = 0b1010; // 2����
	int tb = 0b1111'1010'1111'1010'0001;	// 2���� �ڸ������� ����!! ����!!!
											// singlequote�� �����Ϸ��� ����!
	int td = 49292'1242'1241'3333; // �̰͵� ��������

	// ����� ����� �����սô�
	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item;

	cout << o << ", " << x << endl;

	return 0;
}