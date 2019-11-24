#include "../Includes/Header.h"

void	ArithmeticOperators()
{
	int	Num01 {200};
	int	Num02 {100};
	int	Result {0};

	Result = Num01 + Num02;
	cout << Num01 << " + " <<  Num02 << " = "<< Result << endl;
	
	Result = Num01 - Num02;
	cout << Num01 << " - " <<  Num02 << " = "<< Result << endl;
	
	Result = Num01 * Num02;
	cout << Num01 << " * " <<  Num02 << " = "<< Result << endl;
	
	Result = Num01 / Num02;
	cout << Num01 << " / " <<  Num02 << " = "<< Result << endl; 
	
	Result = Num02 / Num01;
	cout << Num02 << " / " <<  Num01 << " = "<< Result << endl;
	
	Result = Num01 % Num02;
	cout << Num01 << " % " <<  Num02 << " = "<< Result << endl;

	Num01 = 10;
	Num02 = 3;

	Result = Num01 % Num02;
	cout << Num01 << " % " <<  Num02 << " = "<< Result << endl; 
	
	Result = Num01 * 10 + Num02;
	
	cout << 5/10 << endl;
	
	cout << 5.0/10.0 << endl;
	
	cout << endl;
}

void	RelationalOperators()
{
	int Num01{}, Num02{};
	
	cout << boolalpha;
	cout << "Enter 2 integers separated by a space: ";
	cin >> Num01 >> Num02;
	
	cout << Num01 << " > "<< Num02  << " : " << (Num01 > Num02) << endl;
	cout << Num01 << " >= " << Num02  << " : " << (Num01 >= Num02) << endl;
	cout << Num01 << " < "  << Num02  << " : " << (Num01 < Num02) << endl;
	cout << Num01 << " <= " << Num02  << " : " << (Num01 <= Num02) << endl;

	const int Lower {10};
	const int Upper {20};
	
	cout << "\nEnter an integer that is greater than " << Lower << " : " ;
	cin >> Num01;
	cout << Num01 << " > " << Lower << " is " << (Num01 > Lower) << endl;
	
	cout << "\nEnter an integer that is less than or equal to " << Upper << " : " ;
	cin >> Num01;
	cout << Num01 << " <= " << Upper << " is " << (Num01 <=  Upper) << endl;
	
	cout  << endl;
}

void	AssignmentOperators()
{
	int	Num01 {10};
	int	Num02 {20};
	
	cout << "Num01 is " << Num01 << endl;
	cout << "Num02 is " << Num02 << endl;

	cout << endl;
}

void	MixedExpressions()
{
	int			Total {};
	int			Num01 {}, Num02 {}, Num03 {};
	const int	Count {3};
	double		Average;

	cout << "Enter 3 integers delimited by spaces: ";
	cin >> Num01 >> Num02 >> Num03;

	Total = Num01 + Num02 + Num03;
	Average = static_cast<double>(Total) / Count;

	cout << "The 3 numbers were: "<< Num01 << "," << Num02 << "," << Num03 << endl;
	cout << "The sum of the numbers is: " << Total << endl;
	cout << "The average of the numbers is: " << Average << endl << endl;
}

void	LogicalOperators()
{
	int			Num {};
	const int	Lower{10};
	const int	Upper {20};
	
	cout << boolalpha;

	// Determine if an entered integer is between two other integers assume Lower < Upper
	cout << "Enter an integer - the bounds are " << Lower << " and " << Upper << " : ";
	cin >> Num;

	bool within_bounds {false};

	within_bounds = (Num > Lower && Num < Upper);
	cout << Num  << " is between "<< Lower <<  " and " << Upper << " : " << within_bounds << endl;
	
	// Determine if an entered integer is outside two other integers assume Lower < Upper
	cout << "\nEnter an integer - the bounds are " << Lower << " and " << Upper << " : ";
	cin >> Num;

	bool outside_bounds {false};
	outside_bounds = (Num < Lower || Num > Upper);
	cout << Num  << " is outside "<< Lower <<  " and " << Upper << " : " << outside_bounds << endl;

	// Determine if an entered integer is exactly on the boundary assume Lower < Upper
	cout << "\nEnter an integer - the bounds are " << Lower << " and " << Upper << " : ";
	cin >> Num;

	bool on_bounds {false};
	on_bounds = (Num == Lower || Num == Upper);
	cout << Num  << " is on one of the bounds which are "<< Lower <<  " and " << Upper << " : " << on_bounds << endl;

	// Determine is you need to wear a coat based on Temperature and wind speed 
	bool WearCoat {false}; 
	double Temperature {};
	int WindSpeed {};
	
	const int WindSpeedForCoat {25};		// wind over this value requires a coat
	const double TemperatureForCoat {45};	// Temperature below this value requires a coat
	
	// Require a coat if either wind is too high OR Temperature is too low
	cout << "\nEnter the current Temperature in (F) :" ;
	cin >> Temperature;
	cout << "Enter windspeed in (mph): ";
	cin >> WindSpeed;
	
	WearCoat = (Temperature < TemperatureForCoat || WindSpeed > WindSpeedForCoat);
	cout << "Do you need to wear a coat using OR? " << WearCoat << endl;

	// Require a coat if BOTH the windspeed is too high AND Temperature is too low
	WearCoat = (Temperature < TemperatureForCoat && WindSpeed > WindSpeedForCoat);
	cout << "Do you need to wear a coat using AND? " << WearCoat << endl;

	cout << endl;
}

void	IncreDecrementOperators()
{
	int counter {10};
	int result {0};
	 
	// Example 1 - simple increment
	cout << "Counter : " << counter << endl;
	
	counter = counter + 1;
	cout << "Counter : " << counter << endl;
  
	counter++;
	cout << "Counter : " << counter << endl;

	++counter; 
	cout << "Counter : " << counter << endl;

	// Example 2 - preincrement
	counter = 10;
	result = 0;

	cout << "Counter : " << counter << endl;

	result = ++counter; // Note the pre increment
	cout << "Counter : " << counter << endl;
	cout << "Result : " << result << endl;

	// Example 3 - post-increment
	counter = 10;
	result = 0;

	cout << "Counter : " << counter << endl;

	result = counter++; // Note the post increment
	cout << "Counter : " << counter << endl;
	cout << "Result : " << result << endl;

	// Example 4
	counter = 10;
	result = 0;

	cout << "Counter : " << counter << endl;

	result = ++counter + 10;  // Note the pre increment
	
	cout << "Counter : " << counter << endl;
	cout << "Result : " << result << endl;

	// Example 5
	counter = 10;
	result = 0;

	cout << "Counter : " << counter << endl;

	result = counter++ + 10;  // Note the post increment
	
	cout << "Counter : " << counter << endl;
	cout << "Result : " << result << endl;
}

void	EqualityOperators()
{
	bool bEqualResult {false};
	bool bNotEqualResult {false};
	
	int Num01{}, Num02{};
	
	cout << boolalpha;      // will display true/false instead of 1/0 for booleans
	
	cout << "Enter two integers separated by a space: ";
	cin >> Num01 >> Num02;
	bEqualResult = (Num01 == Num02);
	bNotEqualResult = (Num01 != Num02);
	cout << "Comparision result (equals) : " << bEqualResult << endl;
	cout << "Comparision result (not equals) : " << bNotEqualResult << endl;

	
	char char1{}, char2{};
	cout << "Enter two characters separated by a space: ";
	cin >> char1 >> char2;
	bEqualResult = (char1 == char2);
	bNotEqualResult = (char1 != char2);
	cout << "Comparision result (equals) : " << bEqualResult << endl;
	cout << "Comparision result (not equals) : " << bNotEqualResult << endl;

	double Double01{}, Double02{};
	cout << "Enter two doubles separated by a space: ";
	cin >> Double01 >> Double02;
	bEqualResult = (Double01 == Double02);
	bNotEqualResult = (Double01 != Double02);
	cout << "Comparision result (equals) : " << bEqualResult << endl;
	cout << "Comparision result (not equals) : " << bNotEqualResult << endl;

	cout << "Enter an integer and a double separated by a space: ";
	cin >> Num01 >> Double01;
	bEqualResult = (Num01 == Double01);
	bNotEqualResult = (Num01 != Double01);
	cout << "Comparision result (equals) : " << bEqualResult << endl;
	cout << "Comparision result (not equals) : " << bNotEqualResult << endl;
	cout << endl;
}

void	Currency()
{
	const double UsdPerEuro {1.19};
	
	cout << "Welcome to the EUR to USD converter" << endl;
	cout << "Enter the value in EUR : ";
	
	double Euros {0.0};
	double Dollars {0.0};
	
	cin >> Euros;
	Dollars = Euros * UsdPerEuro;
	
	cout << Euros << " Euros is equivalent to " << Dollars << " Dollars" << endl << endl;
}

void	CurrencyChallenge()
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
