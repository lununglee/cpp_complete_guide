#include "../Includes/Header.h"

class DivideByZeroException
{ };

class NegativeNumberException
{ };

void	ErrorHandling()
{
	int		Miles;
	int		Gallons;
	double	MilesPerGallon;

	cout << "Enter miles: ";
	cin >> Miles;
	cout << "Enter gallons: ";
	cin >> Gallons;
	if (Gallons != 0)
	{
		MilesPerGallon = static_cast<double>(Miles) / Gallons;
		cout << "MPG: " << MilesPerGallon << endl;
	}
	else
		cerr << "Error Handler - Divide by zero" << endl;
}

void	ErrorHandlingCatch()
{
	int		Miles;
	int		Gallons;
	double	MilesPerGallon;

	cout << "Enter miles: ";
	cin >> Miles;
	cout << "Enter gallons: ";
	cin >> Gallons;
	try
	{
		if (Gallons == 0)
			throw 0;
		MilesPerGallon = static_cast<double>(Miles) / Gallons;
		cout << "MPG: " << MilesPerGallon << endl;
	}
	catch (int &Exception)
	{
		cerr << "Error Handler - divide by zero: " << Exception << endl;
	}
}

void	ErrorHandlingFunc()
{
	int		Miles;
	int		Gallons;
	double	MilesPerGallon;

	cout << "Enter miles: ";
	cin >> Miles;
	cout << "Enter gallons: ";
	cin >> Gallons;
	try
	{
		MilesPerGallon = CalculateMPG(Miles, Gallons);
		cout << "MPG: " << MilesPerGallon << endl;
	}
	catch (DivideByZeroException &Exception)
	{
		cerr << "Error Handler - divide by zero" << endl;
	}
	catch (NegativeNumberException &Exception)
	{
		cerr << "Error Handler - negative numbers" << endl;
	}
	// catch (...)
	// {
	// 	// catch all exception
	// }
}

double	CalculateMPG(int Miles, int Gallons)
{
	if (Gallons == 0)
		throw DivideByZeroException {};
	if (Miles < 0 || Gallons < 0)
		throw NegativeNumberException {};
	return static_cast<double>(Miles) / Gallons;
}
