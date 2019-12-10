#include "../Includes/Header.h"

void	BoolIO()
{
	cout << "Default Bool: " << (10 == 10) << endl;
	cout << "Default Bool: " << (10 == 20) << endl << endl;

	cout << boolalpha; // setting this will affect ALL following couts
	
	cout << "boolalpha: " << (10 == 10) << endl;
	cout << "boolalpha: " << (10 == 20) << endl << endl;

	cout<< noboolalpha; // setting this will affect ALL following couts

	cout << "noboolalpha: " << (10 == 10) << endl;
	cout << "noboolalpha: " << (10 == 20) << endl << endl;

	std::cout.setf(std::ios::boolalpha); // same thing as boolalpha
	cout << "setf boolalpha: " << (10 == 10) << endl;
	cout << "setf boolalpha: " << (10 == 20) << endl << endl;

	std::cout << std::resetiosflags(std::ios::boolalpha); // reset to noboolapha
	cout << "reset boolalpha: " << (10 == 10) << endl;
	cout << "reset boolalpha: " << (10 == 20) << endl;
}

void	IntIO()
{
	int	Num {255};
	int	Num1 {255};
	int	Num2 {-255};

	std::cout << std::dec << Num << endl;
	std::cout << std::hex << Num << endl;
	std::cout << std::oct << Num << endl << endl;

	std::cout << std::showbase;
	std::cout << std::dec << Num << endl;
	std::cout << std::hex << Num << endl;
	std::cout << std::oct << Num << endl << endl;

	std::cout << std::noshowbase;
	std::cout << std::dec << std::showpos;
	std::cout << Num1 << endl;
	std::cout << Num2 << endl << endl;

	// Reset IO Flags
	std::cout << std::resetiosflags(std::ios::basefield);
	std::cout << std::resetiosflags(std::ios::showbase);
	std::cout << std::resetiosflags(std::ios::showpos);
	std::cout << std::resetiosflags(std::ios::uppercase);
}
