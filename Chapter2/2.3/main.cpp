/*
 * Chapter 2.3 - C++11 고정 너비 정수
 *
 * 정수를 저장하는 타입 중 C++11이 지원하는 각종 유용한 타입을 소개한다.
 * 형식: <type>[_fast|least]<bits>_t
 * fast, least 등의 키워드를 사용할 수 있다.
 */

#include <iostream>
//#include <cstdint>

int main()
{
	using namespace std;

	std::int16_t i(5); // 해당 플랫폼에서의 2byte Datatype로 바꿔줌 (short int, 16bit)
	std::int8_t myint = 65; // 해당 플랫폼에서의 1byte Datatype로 바꿔줌 (char, 8bit)

	cout << myint << endl;

	std::uint_fast8_t fi(5); // 8비트중 가장 빠른 데이터 타입
	std::int_least64_t fl(5); // 적어도 64비트인 자료형

	return 0;
}