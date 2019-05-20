/*
 * Chapter 6.10 C언어 스타일의 문자열 심볼릭 상수
 */

#include <iostream>

using namespace std;

int main()
{
	// 안에 무엇이 들어갈지는 정의되어 있지만
	// 어떻게 초기화할지는 말하지 않고 있다.
	// char* name = "JHack Hack";

	// 이를 상수화할 수 있다.
	const char *name = "Jack Jack";
	const char* name2 = "Jack Jack";
	const char* name3 = "Jack Jack 2";

	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl; // Same value (Compilation time const)
	cout << (uintptr_t)name3 << endl; // Different value 

	cout << endl << endl;

	// 문자열 배열 변수 특성
	int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello, World!";
	const char* namek = "Jack Rack";

	cout << int_arr << endl; // 주소가 출력됨
	cout << char_arr << endl; // 배열의 내용이 String처럼 출력됨
	cout << namek << endl; // 분명 포인터인데 **컴파일러가 알아서** 문자열 상수로써 출력해줌
}