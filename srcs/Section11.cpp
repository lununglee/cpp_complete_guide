#include "../Includes/Header.h"

void				PrintArray(const int arr[], size_t Size)
{
	for (size_t i{0}; i < Size; ++i)
		cout << arr[i] << " ";
	cout << endl;
	// arr[0] = 50000; // bug
}

void				SetArray(int arr[], size_t Size, int value)
{
	for (size_t i{0}; i < Size; ++i)
		arr[i] = value;
}

void				ArrayFunctions()
{
	int MyScores[] {100, 98, 90, 86, 84};
	
	PrintArray(MyScores, 5);
	SetArray(MyScores, 5, 100);
	PrintArray(MyScores, 5);
	PrintArray(MyScores, 5);
	
	cout << endl;
}

void				VectorArrayChallenge()
{
	vector<int> Numbers {};
	char Selection {};
	
	do {
		// Display menu
		cout << "\nP - Print Numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the Numbers" << endl;
		cout << "S - Display the Smallest number" << endl;
		cout << "L - Display the Largest number"<< endl;
		cout << "Q - Quit" << endl;
		cout << "\nEnter your choice: ";
		cin >> Selection;

		
		if (Selection == 'P' || Selection == 'p') {
			if (Numbers.size() == 0)
				cout << "[] - the list is empty" << endl;
			else {
				cout << "[ ";
				for (auto Num: Numbers)
					cout << Num << " ";
				cout << "]" << endl;
			}
		} else if (Selection == 'A' || Selection == 'a') {
			int NumToAdd {};
			cout << "Enter an integer to add to the list: ";
			cin >> NumToAdd;
			Numbers.push_back(NumToAdd);
			cout << NumToAdd << " added" << endl;
		} else if (Selection == 'M' || Selection == 'm') {
			if (Numbers.size() == 0)
				cout << "Unable to calculate mean - no data" << endl;
			else {
				int total {};
				for (auto Num: Numbers)
					total += Num;
				cout << "The mean is : " << static_cast<double>(total)/Numbers.size() << endl;
			}
		} else if (Selection == 'S' || Selection == 's') {
			if (Numbers.size() == 0) 
				cout << "Unable to determine the Smallest - list is empty" << endl;
			else {
				int Smallest = Numbers.at(0);
				for (auto Num: Numbers)
					if (Num < Smallest)
						Smallest = Num;
				cout << "The Smallest number is: " << Smallest << endl;
			}
		} else if (Selection == 'L' || Selection == 'l') {
			if (Numbers.size() == 0)
				cout << "Unable to determine Largest - list is empty"<< endl;   
			else {
				int Largest = Numbers.at(0);
				for (auto Num: Numbers)
					if (Num > Largest)
						Largest = Num;
				cout << "The Largest number is: " << Largest << endl;
			}
		} else if (Selection == 'Q' || Selection == 'q') {
			cout << "Goodbye" << endl;
		} else {
			cout << "Unknown Selection, please try again" << endl;
		}
	} while (Selection != 'q' && Selection != 'Q');
	cout  << endl;
}

void				Factorial()
{
	cout << FactorialFunction(3) << endl;
}

unsigned long long	FactorialFunction(unsigned long long Number)
{
	if (Number == 0)
		return 1;				// base casef
	return Number * FactorialFunction(Number-1);	// recursive case
}

void				Fibonacci()
{
	cout << FibonacciFunction(5) << endl;	// 5
	cout << FibonacciFunction(30) << endl;	// 832040 
	cout << FibonacciFunction(40) << endl;	// 102334155
}

unsigned long long	FibonacciFunction(unsigned long long Number)
{
	if (Number <= 1)
		return Number;	// base cases
	return FibonacciFunction(Number-1) + FibonacciFunction(Number-2); // recursion
}

double				CalcCost(double BaseCost, double TaxRate, double Shipping)
{
	return BaseCost += (BaseCost * TaxRate) + Shipping;
}

void				Greeting(string Name,  string Prefix, string Suffix)
{
	cout << "Hello " << Prefix + " " + Name + " " + Suffix << endl;
}

void				DefaultArgument()
{
	double Cost{ 0 };
	Cost = CalcCost(100.0, 0.08, 4.25);        // will use no defaults  100 + 8 + 4.25 

	cout << fixed << setprecision(2);
	cout << "Cost is: " << Cost << endl;    // 112.25

	Cost = CalcCost(100.0, 0.08);                  // will use default Shipping  100 + 8 + 3.50 
	cout << "Cost is: " << Cost << endl;    // 111.50

	Cost = CalcCost(200.0);                         // will use default tax and Shipping   200 + 12 + 3.50
	cout << "Cost is: " << Cost << endl;    // 215.50

	Cost = CalcCost();
	cout << "Cost is: " << Cost << endl;    // 100 + 6 + 3.50

	Greeting("Glenn Jones", "Dr.", "M.D.");
	Greeting("James Rogers", "Professor", "Ph.D.");
	Greeting("Frank Miller", "Dr.");
	Greeting("William Smith");
	Greeting("Mary Howard", "Mrs.", "Ph.D.");

	cout << endl;
}

void				OverloadPrint(int Num)
{
	cout << "Printing int: " << Num << endl;
}

void				OverloadPrint(double Num)
{
	cout << "Printing double: " << Num << endl;
}

void				OverloadPrint(string Str)
{
	cout << "Printing string: " << Str << endl;
}

void				OverloadPrint(string Str, string T)
{
	cout << "Printing 2 strings: " << Str << " and " << T << endl;
}

void				OverloadPrint(vector<string> Vec)
{
	cout << "Printing vector of strings: " ;
	for (auto Char : Vec)
		cout << Char + " ";
	cout << endl;
}

void				FunctionOverloading()
{
	OverloadPrint(100);    // int
	OverloadPrint('A');     //  character is always promoted to int should OverloadPrint 65 ASCII ('A')
	
	OverloadPrint(123.5);   // double
	OverloadPrint(123.3F);  // Float is promoted to double
	
	OverloadPrint("C-style string");  // C-style string is converted to a C++ string
	
	string s {"C++ string"};    
	OverloadPrint(s);       // C++ string
	
	OverloadPrint("C-style string", s); // First argument is converted to a C++ string
	
	vector<string> three_stooges {"Larry", "Moe", "Curly"};
	OverloadPrint(three_stooges);
	
	cout << endl;
}

void				PassByRef1(int &Num)
{
	Num = 1000;
}

void				PassByRef2(string &Str)
{
	Str = "Changed";
}

void				PassByRef3(vector<string> &Vec)
{
	Vec.clear();  // delete all vector elements
}

void				PrintVector(const vector<string> &Vec)
{
	for (auto Char: Vec) 
		cout << Char << " ";
	cout << endl;
}

void				PassByReference()
{
	int Num {10};
	int AnotherNum {20};
	
	cout << "Num before calling PassByRef1: " << Num << endl;
	PassByRef1(Num);
	cout << "Num after calling PassByRef1: " << Num << endl;
	
	cout << "\nanother_num before calling PassByRef1: " << AnotherNum << endl;
	PassByRef1(AnotherNum);
	cout << "AnotherNum after calling PassByRef1: " << AnotherNum << endl;

	string name {"Frank"};
	cout << "\nname before calling PassByRef2: " << name << endl;
	PassByRef2(name);
	cout << "name after calling PassByRef2: " << name << endl;

	vector<string> Stooges {"Larry", "Moe", "Curly"};
	cout << "\nstooges before calling PassByRef3: ";
	PrintVector(Stooges);
	PassByRef3(Stooges);
	cout << "Stooges after calling PassByRef3: ";
	PrintVector(Stooges);
	
	cout << endl;
}

void				FunctionChallenge()
{
	vector<int>	Nums {45, 23, 56, 87, 45, 77, 87};
	char		UserSelection;

	do {
		PrintMenu();
		UserSelection = GetUserInput();
		switch (UserSelection)
		{
			case 'P':
				PrintHandler(Nums);
				break;
			case 'A':
				AddHandler(Nums);
				break;
			case 'M':
				MeanHandler(Nums);
				break;
			case 'S':
				SmallestHandler(Nums);
				break;
			case 'L':
				LargestHandler(Nums);
				break;
			case 'F':
				FindHandler(Nums);
			case 'Q':
				break;
			default:
				break;
		}
	} while (UserSelection != 'Q');
}

void				SectionChallenge_11()
{
	vector<int>	Nums {45, 23, 56, 87, 45, 77, 87};
	char		UserSelection;

	do {
		PrintMenu();
		UserSelection = GetUserInput();
		switch (UserSelection)
		{
			case 'P':
				PrintHandler(Nums);
				break;
			case 'A':
				AddHandler(Nums);
				break;
			case 'M':
				MeanHandler(Nums);
				break;
			case 'S':
				SmallestHandler(Nums);
				break;
			case 'L':
				LargestHandler(Nums);
				break;
			case 'F':
				FindHandler(Nums);
			case 'Q':
				break;
			default:
				break;
		}
	} while (UserSelection != 'Q');
}

void				PrintMenu()
{
	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "Q - Quit" << endl;
}

char				GetUserInput()
{
	char UserSelection;
	cin >> UserSelection;
	UserSelection = toupper(UserSelection);
	return UserSelection;
}

void				PrintHandler(const vector<int> &Numbers)
{
	for (auto Num : Numbers)
		cout << Num << " ";
	cout << endl;
}
void				AddHandler(vector<int> &Numbers)
{
	int UserInput;
	cout << "Please enter a number you'd like to add to the list: ";
	cin >> UserInput;
	Numbers.push_back(UserInput);
}

void				MeanHandler(const vector<int> &Numbers)
{
	int Total {0};
	int Mean {0};
	for (auto Num : Numbers)
		Total += Num;
	Mean = Total / Numbers.size();
	cout << Mean << endl;
}

void				SmallestHandler(const vector<int> &Numbers)
{
	int SmallestNumber {0};
	SmallestNumber = *min_element (Numbers.begin(), Numbers.end());
	cout << SmallestNumber << endl;
}

void				LargestHandler(const vector<int> &Numbers)
{
	int LargestNumber {0};
	LargestNumber = *min_element (Numbers.begin(), Numbers.end());
	cout << LargestNumber << endl;
}

bool				FindHandler(const vector<int> &Numbers)
{
	int target;
	cout << "What number you want?" << endl;
	cin >> target;
	for (auto Num : Numbers)
		if (Num == target)
			return true;
	return false;
}
