/*
 * Chapter 6.10 C��� ��Ÿ���� ���ڿ� �ɺ��� ���
 */

#include <iostream>

using namespace std;

int main()
{
	// �ȿ� ������ ������ ���ǵǾ� ������
	// ��� �ʱ�ȭ������ ������ �ʰ� �ִ�.
	// char* name = "JHack Hack";

	// �̸� ���ȭ�� �� �ִ�.
	const char *name = "Jack Jack";
	const char* name2 = "Jack Jack";
	const char* name3 = "Jack Jack 2";

	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl; // Same value (Compilation time const)
	cout << (uintptr_t)name3 << endl; // Different value 

	cout << endl << endl;

	// ���ڿ� �迭 ���� Ư��
	int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello, World!";
	const char* namek = "Jack Rack";

	cout << int_arr << endl; // �ּҰ� ��µ�
	cout << char_arr << endl; // �迭�� ������ Stringó�� ��µ�
	cout << namek << endl; // �и� �������ε� **�����Ϸ��� �˾Ƽ�** ���ڿ� ����ν� �������
}