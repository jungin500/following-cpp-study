/*
 * Chapter 5.10 - std::cin �� �� ����
 */

#include <iostream>

using namespace std;

int getInt()
{
	while (true) {
		cout << "Enter a integer number : ";
		int x;
		cin >> x; // buffered input

		if (std::cin.fail()) // �б⿡ ���������� (fail)
		{
			std::cin.clear(); // ���۸� clear���ش�.
			std::cin.ignore(32767, '\n'); // ignore buffer with sigificant bigint
			cout << "Invalid number, please try again" << endl;
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}

char getOperator()
{
	while (true) {
		cout << "Enter an operator (+,-) : ";
		char op;
		cin >> op; // buffered input
		std::cin.ignore(32767, '\n'); // ignore buffer with sigificant bigint

		if (op == '+' || op == '-')
			return op;
		else
			cout << "Invalid operator, please try again." << endl;
	}
}

void printResult(int x, char op, int y)
{
	if (op == '+') cout << x + y << endl;
	else if (op == '-') cout << x - y << endl;
	else
		cout << "Invalid operator" << endl;
}

int main()
{
	using namespace std;

	int		x	= getInt();
	char	op	= getOperator();
	int		y	= getInt();

	printResult(x, op, y);

	return 0; 
}