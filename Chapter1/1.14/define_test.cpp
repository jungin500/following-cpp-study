#include <iostream>

void doSomething()
{
	using namespace std;

#ifdef IS_WINDOWS_CONSOLE
	cout << "Windows Console defined at another file" << endl;
#else
	cout << "Windows Console IS NOT Defined at Another File!" << endl;
#endif
}