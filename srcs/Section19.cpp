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
