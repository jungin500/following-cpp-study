/*
 * Chapter 4.9 - �ڷ������� ���� �ٿ��ֱ�
 */

#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	// �ڷ����� �̸��� �ٲܼ� �ִ�.
	typedef double distance_t; // double�� �Ÿ��� ���°��̶� ����

	// ���� <���� �ʺ� ����>�� �ִ°��� ������
	std::int8_t i(97);

	double		my_distance;
	distance_t	home2work;
	distance_t	home2school;

	// vector ���ο� pair ����Ʈ�� �ִµ�,
	// �� pair�� string:int���̴�.
	std::vector<std::pair<std::string, int>> pairlist;
	typedef std::vector<std::pair<std::string, int>> pairlist_t;
	// ���� pairlist_t�� ������ ����� �� �ִ�...
	// linux���� ���� ���� ��

	using pairlist_tu = std::vector<std::pair<std::string, int>>;
	// C++11���� ��� ������ ������

	return 0;
}