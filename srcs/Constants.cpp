#include "../includes/Header.h"

void	Constants()
{
	const double PricePerSmallRoom {32.50};
	const double PricePerLargeRoom {47.50};

	cout << "\nHello, welcome to Frank's Carpet Cleaning Service" << endl;
	cout << "Please enter the number of small rooms you'd like us to clean: ";
	int NumberOfSmallRooms {0};
	cin >> NumberOfSmallRooms;
	cout << "Please enter the number of large rooms you'd like us to clean: ";
	int NumberOfLargeRooms {0};
	cin >> NumberOfLargeRooms;

	double Cost {NumberOfSmallRooms * PricePerSmallRoom + NumberOfLargeRooms * PricePerLargeRoom};
	cout << "\nThe price per small room is $" << PricePerSmallRoom << " and the price per large room is $" << PricePerLargeRoom << " so your total will be: $" << Cost << endl << endl;

	const double Tax {Cost * 0.06};
	double TotalPrice {Tax + Cost};
	cout << "Your tax is: $" << Tax << " so your total will be: $" << TotalPrice << endl;
}
