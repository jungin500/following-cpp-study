/*
 * Chapter 6.18 보이드 포인터
 */

#include <iostream>

using namespace std;

int main()
{
	//
	// 보이드 포인터 (Generic pointer == 모든 값을 지닐 수 있음)
	//
	int		i = 5;
	float	f = 3.0;
	char	c = 'a';

	void* ptr = nullptr;

	ptr = &i; // 쨌든 넣어봄
	ptr = &f; // 근데 문제가 있음
	// ptr = &c; // 넣고나선 이게 뭔지 모름

	// cout << ptr + 1 << endl; // 불가능: void형은 크기가 없다... 포인터 연산 불가능
	cout << &f << " " << ptr << endl; // 가능!
	//cout << *ptr << endl; // 표현의 종류를 모름!
	cout << *static_cast<float*>(ptr) << endl; // 강제 캐스팅을 해야한다 ㅠㅠㅠ

	// 쓰는 이유: 무조건적인 값 저장, 타입 강제 비-추론형

	return 0;
}