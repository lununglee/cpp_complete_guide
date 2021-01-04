#include "../Includes/Header.h"

void	ClearInput()
{
	cin.clear();
	cin.ignore();
}

void	BasicIO()
{
	// Same results
	cout << "--------------------" << endl;
	cout << "Hello world!" << endl;

	cout << "Hello ";
	cout << "World!" << endl;
	cout << "--------------------" << endl;

	// Same results
	cout << "Hello world!" << endl;
	cout << "Hello" << " world!" << endl;
	cout << "Hello" << " world!\n";
	cout << "--------------------" << endl;

	cout << "Hello\nOut\nThere\n";
	cout << "--------------------" << endl;

	// Input examples
	int		Number01;
	int		Number02;
	double	Number03;

	// Integer input delimited by "return carriage"
	cout << "Enter a first integer: ";
	cin >> Number01;

	cout << "Enter a second integer: ";
	cin >> Number02;

	cout << "You entered " << Number01 << " and " << Number02 << endl;

	// Integer input delimited by "spaces"
	cout << "Enter 2 integers separated with a space: ";
	cin >> Number01 >> Number02;
	cout << "You entered " << Number01 << " and " << Number02 << endl;

	cout << "Enter a double: ";
	cin >> Number03;
	
	cout << "You entered : " << Number03 << endl;
}
