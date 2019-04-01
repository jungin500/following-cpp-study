/*
 * Chapter 4.9 - 자료형에게 가명 붙여주기
 */

#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	// 자료형의 이름을 바꿀수 있다.
	typedef double distance_t; // double을 거리로 쓰는것이라 생각

	// 기존 <고정 너비 정수>도 있는것을 쓴것임
	std::int8_t i(97);

	double		my_distance;
	distance_t	home2work;
	distance_t	home2school;

	// vector 내부에 pair 리스트가 있는데,
	// 그 pair는 string:int형이다.
	std::vector<std::pair<std::string, int>> pairlist;
	typedef std::vector<std::pair<std::string, int>> pairlist_t;
	// 이제 pairlist_t로 모든것을 사용할 수 있다...
	// linux에서 보통 많이 씀

	using pairlist_tu = std::vector<std::pair<std::string, int>>;
	// C++11에서 사용 가능한 문법임

	return 0;
}