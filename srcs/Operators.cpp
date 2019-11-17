#include "../includes/Header.h"

void	Operators()
{
	const double UsdPerEur {1.19};

	cout << "Welcome to the currency converter" << endl;
	cout << "Enter the values in EUR: ";
	double Euros {0};
	cin >> Euros;
	double Dollars {0};
	Dollars = Euros * UsdPerEur;
	cout << Dollars << endl;
}
