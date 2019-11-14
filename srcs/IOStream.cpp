#include "../includes/Header.h"

void	ClearInput()
{
	cin.clear();
	cin.ignore();
}

void	StringIO()
{
	int	PlayerGuess;

	cout << "Please enter your favorite number between 1-100" << endl;
	cin >> PlayerGuess;
	ClearInput();
	cout << "Oh wow! That is my favorite number" << endl;
	cout << "No really! " << PlayerGuess << " IS my favorite number!" << endl;
}

void	NumIO()
{
	int		Num1;
	int		Num2;
	double	Num3;

	// Individual inputs
	cout << "Enter the first integer: ";
	cin >> Num1;
	cout << "Enter the second integer: ";
	cin >> Num2;
	cout << "You entered " << Num1 << " and " << Num2 << endl;

	// Chained input
	cout << "Please enter 2 integers separated by spaces: ";
	cin >> Num1 >> Num2;
	cout << "You entered " << Num1 << " and " << Num2 << endl;

	// Double
	cout << "Enter a double: ";
	cin >> Num3;
	cout << "You've entered: " << Num3 << endl;

	// Mix between double and int
	cout << "Enter an integer: ";
	cin >> Num1;
	cout << "Enter a double: ";
	cin >> Num3;
	cout << "You entered " << Num1 << " and " << Num3 << endl;
}
