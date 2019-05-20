/*
 * Chapter 6.18 ���̵� ������
 */

#include <iostream>

using namespace std;

int main()
{
	//
	// ���̵� ������ (Generic pointer == ��� ���� ���� �� ����)
	//
	int		i = 5;
	float	f = 3.0;
	char	c = 'a';

	void* ptr = nullptr;

	ptr = &i; // ·�� �־
	ptr = &f; // �ٵ� ������ ����
	// ptr = &c; // �ְ��� �̰� ���� ��

	// cout << ptr + 1 << endl; // �Ұ���: void���� ũ�Ⱑ ����... ������ ���� �Ұ���
	cout << &f << " " << ptr << endl; // ����!
	//cout << *ptr << endl; // ǥ���� ������ ��!
	cout << *static_cast<float*>(ptr) << endl; // ���� ĳ������ �ؾ��Ѵ� �ФФ�

	// ���� ����: ���������� �� ����, Ÿ�� ���� ��-�߷���

	return 0;
}