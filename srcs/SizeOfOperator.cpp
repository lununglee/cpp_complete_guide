#include "../includes/Header.h"

void	SizeOfOperator()
{
	cout << "=========================================" << endl;
	cout << "INTEGER DATA TYPES" << endl;
	cout << "char: " << sizeof(char) << " bytes." << endl;
	cout << "int: " << sizeof(int) << " bytes." << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
	cout << "short: " << sizeof(short) << " bytes." << endl;
	cout << "long: " << sizeof(long) << " bytes." << endl;
	cout << "long long: " << sizeof(long long) << " bytes." << endl << endl;
	cout << "=========================================" << endl;

	cout << "FLOATING DATA TYPES" << endl;
	cout << "float: " << sizeof(float) << " bytes." << endl;
	cout << "double: " << sizeof(double) << " bytes." << endl;
	cout << "long double: " << sizeof(long double) << " bytes." << endl << endl;
	cout << "=========================================" << endl;

	cout << "MINUMUM VALUES:" << endl;
	cout << "char: " << CHAR_MIN << endl;
	cout << "int: " << INT_MIN << endl;
	cout << "short: " << SHRT_MIN << endl;
	cout << "long: " << LONG_MIN << endl;
	cout << "long long: " << LLONG_MIN << endl << endl;
	cout << "=========================================" << endl;

	cout << "MAXIMUM VALUES:" << endl;
	cout << "char: " << CHAR_MAX << endl;
	cout << "int: " << INT_MAX << endl;
	cout << "short: " << SHRT_MAX << endl;
	cout << "long: " << LONG_MAX << endl;
	cout << "long long: " << LLONG_MAX << endl << endl;
	cout << "=========================================" << endl;

	cout << "SIZE OF VARIABLES" << endl;
	int		age {21};
	cout << "age is: " << sizeof(age) << " bytes." << endl;
	double	wage {22.24};
	cout << "wage is: " << sizeof(wage) << " bytes." << endl;

	
}
