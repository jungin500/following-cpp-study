/*
 * Chapter 1.12 - 헤더 가드가 필요한 이유
 */

#include "add.h" // 여기서 또다시 add.h를 가져오게 되어 중복된다.

int add(int a, int b)
{
	return a + b;
}