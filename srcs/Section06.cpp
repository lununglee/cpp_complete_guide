#include "../Includes/Header.h"

int	Age {18};				// global variable

void	GlobalVariables()
{
	int	Age {16};			// local variable

	cout << Age << endl;	// shows local variable over global variable
}

// Shows size of primitive data types
void	SizeOfInfo()
{
	/**********************************************************
	*               Size of primitive data types              *
	**********************************************************/
	cout << "sizeof() information" << endl;
	cout << "==============================" << endl;

	cout << "char: " << sizeof(char) << " bytes" << endl;
	cout << "int: " << sizeof(int) << " bytes" << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
	cout << "short: " << sizeof(short) << " bytes" << endl;
	cout << "long: " << sizeof(long) << " bytes" << endl;
	cout << "long long: " << sizeof(long long) << " bytes" << endl;
	cout << "==============================" << endl;

	cout << "float: " << sizeof(float) << " bytes" << endl;
	cout << "double: " << sizeof(double) << " bytes" << endl;
	cout << "long double: " << sizeof(long double) << " bytes" << endl;
	cout << "==============================" << endl;

	/**********************************************************
	*           Minimum values defined in <climits>           *
	**********************************************************/
	cout << "Minimum values: " << endl << endl;
	cout << "char :" << CHAR_MIN << endl;
	cout << "int: " << INT_MIN << endl;
	cout << "short: " << SHRT_MIN << endl;
	cout << "long: " << LONG_MIN << endl;
	cout << "long long: " << LLONG_MIN << endl;
	cout << "==============================" << endl;

	/**********************************************************
	*           Maximum values defined in <climits>           *
	**********************************************************/
	cout << "Maximum values: " << endl << endl;
	cout << "char: " << CHAR_MAX << endl;
	cout << "int: " << INT_MAX << endl;
	cout << "short: " << SHRT_MAX << endl;
	cout << "long: " << LONG_MAX << endl;
	cout << "long long: " << LLONG_MAX << endl;
	cout << "==============================" << endl;

	/**********************************************************
	*              sizeof() with variable names               *
	**********************************************************/
	int		Age {21};
	double	Wage {22.50};

	cout << "Age is: " << Age << endl;
	cout << "Size of the variable \"Age\" is: " << sizeof(Age) << endl << endl;
	// cout << "Size of the variable \"Age\" is: " << sizeof Age << endl;

	cout << "Wage is: " << Age << endl;
	cout << "Size of the variable \"Wage\" is: " << sizeof(Wage) << endl;
	// cout << "Size of the variable \"Wage\" is: " << sizeof Wage << endl;
}

// Showcase of each primitive types
void	PrimitiveTypes()
{
	/**********************************************************
	*                     Character Type                      *
	**********************************************************/
	char			MiddleInitial {'L'};
	cout << " My middle initial is: " << MiddleInitial << endl;

	/**********************************************************
	*                      Integer Type                       *
	**********************************************************/
	unsigned short	ExamScore{89};
	cout << "My exam score was " << ExamScore << endl;

	int				CountriesRepresented {58};
	cout << "There were " << CountriesRepresented << " countries represented in the UN" << endl;

	long			FloridaPopulation {20610000};
	cout << "There are about " << FloridaPopulation << " in Florida" << endl;

	long long		EarthPopulation {7'600'000'000};
	cout << "There are about " << EarthPopulation << " on Earth" << endl;

	/**********************************************************
	*                   Floating Point Type                   *
	**********************************************************/
	float			CarPayment {503.68};
	cout << "My car payment is " << CarPayment << endl;

	double			Pi {3.14159};
	cout << "PI is " << Pi << endl;

	long double		LargeAmount {2.7e120};
	cout << LargeAmount << " is a very large number" << endl;

	/**********************************************************
	*                      Boolean Type                       *
	**********************************************************/
	bool			bGameOver {false};
	cout << "The value of game over is " << bGameOver << endl;

	/**********************************************************
	*                    Overflow Example                     *
	**********************************************************/
	short			Value01 {30000};
	short			Value02 {1000};
	short			Product {static_cast<short>(Value01 * Value02)};

	cout << "The product of " << Value01 << " and " << Value02 << " is " << Product << endl;
}

void	InitializingVariables()
{
	int	RoomWidth {0};
	int	RoomLength {0};
	int	RoomArea {RoomWidth * RoomLength};

	cout << "Enter the width of the room: ";
	cin >> RoomWidth;

	cout << "Enter the length of the room: ";
	cin >> RoomLength;

	cout << "The area of the room is: " << RoomArea << "cm2" << endl;
}

void	Constants()
{
	int	NumberOfRooms {0};
	
	cout << "Hello welcome to Leo's Carpet Cleaning Services" << endl;
	cout << "How many rooms would you like to us to clean?: ";

	cin >> NumberOfRooms;

	const double	PricePerRoom {32.5};
	const double	SalesTax {0.06};
	const int		EstimateExpiry {30};

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of rooms: " << NumberOfRooms << endl;
	cout << "Price per room: $" << PricePerRoom << endl;
	cout << "Cost : $" << PricePerRoom * NumberOfRooms << endl;
	cout << "Tax: $" << (PricePerRoom * NumberOfRooms) * SalesTax << endl;
	cout << "===============================" << endl;
	cout << "Total estimate: $" << (PricePerRoom * NumberOfRooms) + ((PricePerRoom * NumberOfRooms) * SalesTax) << endl;
	cout << "This estimate is valid for " << EstimateExpiry << " days" << endl;
}

void	ConstChallenge()
{
	const double	PricePerSmallRoom {32.50};
	const double	PricePerLargeRoom {47.50};
	int 			NumberOfSmallRooms {0};
	int 			NumberOfLargeRooms {0};

	cout << "\nHello, welcome to Frank's Carpet Cleaning Service" << endl;
	cout << "Please enter the number of small rooms you'd like us to clean: ";
	cin >> NumberOfSmallRooms;
	cout << "Please enter the number of large rooms you'd like us to clean: ";
	cin >> NumberOfLargeRooms;

	double Cost {(NumberOfSmallRooms * PricePerSmallRoom) + (NumberOfLargeRooms * PricePerLargeRoom)};
	cout << "\nThe price per small room is $" << PricePerSmallRoom << " and the price per large room is $" << PricePerLargeRoom << " so your total will be: $" << Cost << endl << endl;

	const double Tax {Cost * 0.06};
	double TotalPrice {Tax + Cost};
	cout << "Your tax is: $" << Tax << " so your total will be: $" << TotalPrice << endl;
}
