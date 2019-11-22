#include "../Includes/Header.h"

void	Currency()
{
	int		UserInput {0};
	int		Dollar {0}, DollarValue {100};
	int		Quarter {0}, QuarterValue {25};
	int		Dime {0}, DimeValue {10};
	int		Nickel {0}, NickelValue {5};
	int		Penny {0}, PennyValue {1};

	cout << "Please enter the amounf of cash you would like to convert: ";
	cin >> UserInput;

	// while (UserInput != 0)
	// {
	// 	if (UserInput >= 100)
	// 	{
	// 		Dollar += 1;
	// 		UserInput -= 100;
	// 	}
	// 	else if (UserInput >= 25)
	// 	{
	// 		Quarter += 1;
	// 		UserInput -= 25;
	// 	}
	// 	else if (UserInput >= 10)
	// 	{
	// 		Dime += 1;
	// 		UserInput -= 10;
	// 	}
	// 	else if (UserInput >= 5)
	// 	{
	// 		Nickel += 1;
	// 		UserInput -= 5;
	// 	}
	// 	else if (UserInput >= 1)
	// 	{
	// 		Penny += 1;
	// 		UserInput -= 1;
	// 	}
	// 	else
	// 		;
	// 	cout << UserInput << endl;
	// }

	Dollar = UserInput / DollarValue;
	UserInput -= Dollar * DollarValue;

	Quarter = UserInput / QuarterValue;
	UserInput -= Quarter * QuarterValue;

	Dime = UserInput / DimeValue;
	UserInput -= Dime * DimeValue;

	Nickel = UserInput / NickelValue;
	UserInput -= Nickel * NickelValue;

	Penny = UserInput / PennyValue;
	UserInput -= Penny * PennyValue;

	cout << "You'll have: " << endl;
	cout << Dollar << " Dollars" << endl;
	cout << Quarter << " Quarters" << endl;
	cout << Dime << " Dimes" << endl;
	cout << Nickel << " Nickels" << endl;
	cout << Penny << " Pennies" << endl;
}
