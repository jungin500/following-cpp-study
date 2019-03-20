/*
 * Chapter 2.3 - C++11 ���� �ʺ� ����
 *
 * ������ �����ϴ� Ÿ�� �� C++11�� �����ϴ� ���� ������ Ÿ���� �Ұ��Ѵ�.
 * ����: <type>[_fast|least]<bits>_t
 * fast, least ���� Ű���带 ����� �� �ִ�.
 */

#include <iostream>
//#include <cstdint>

int main()
{
	using namespace std;

	std::int16_t i(5); // �ش� �÷��������� 2byte Datatype�� �ٲ��� (short int, 16bit)
	std::int8_t myint = 65; // �ش� �÷��������� 1byte Datatype�� �ٲ��� (char, 8bit)

	cout << myint << endl;

	std::uint_fast8_t fi(5); // 8��Ʈ�� ���� ���� ������ Ÿ��
	std::int_least64_t fl(5); // ��� 64��Ʈ�� �ڷ���

	return 0;
}