/*
 * Chapter 5.9 - 난수 만들기 random numbers
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

 /*
 unsigned int PRNG() // Pseude Random Number Generator
 {
	 static unsigned int seed = 1231; // seed number

	 seed = 14212433 * seed + 12392992;

	 return seed % 32768;
 }

 int main()
 {
	 using namespace std;

	 for (int count = 1; count <= 100; ++count)
	 {
		 cout << PRNG() << "\t";

		 if (count % 5 == 0) cout << endl;
	 }

 }
 */

// 기존 Random 사용법

/*
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}


int main()
{
	using namespace std;

	// std::srand(5323); // static seed for debugging
	std::srand(static_cast<unsigned int>(std::time(0))); // Time as seed

	for (int count = 1; count <= 100; ++count)
	{
		cout << std::rand() << "\t";

		if (count % 5 == 0) cout << endl;
	}
}
*/

// C++11 Random Generator using Mersenne Twister

#include <random>

using namespace std;

int main()
{
	std::random_device rd;
	std::mt19937 mersenne(rd()); // Create a mesenne twister
	std::uniform_int_distribution<> dice(1, 6); // Uniform Distribution! 1부터 6까지

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;
}