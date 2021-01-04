#include "../Includes/Header.h"

void	WhileLoops()
{
	int		Num {};
	int		Number {};
	bool	bDone {false};

	cout << "Enter a positive integer - start the countdown :";
	cin >> Num;
	
	while (Num > 0)
	{
		cout << Num << endl;
		Num--;
	}
	cout << "Blastoff!" << endl;

	cout << "Enter a postive integer to count up to: ";
	cin >> Num;

	int Counter {1};
	while (Num >= Counter)
	{
		cout << Counter << endl;
		Counter++;
	}

	cout << "Enter an integer less than 100: ";
	cin >> Number;

	while (Number >= 100) // !(Number < 100)
	{
		cout << "Enter an integer less than 100: ";
		cin >> Number;
	}

	cout << "Thanks" << endl;  
	
	Number = 0;

	while (!bDone)
	{
		cout << "Enter an integer between 1 and 5: ";
		cin >> Number;
		if (Number <=1 || Number >=5)
			cout << "Out of range, try again" << endl;
		else {
			cout << "Thanks!" << endl;
			bDone = true;
		}
	}
	cout  << endl;
}

void	DoWhileLoops()
{
	/*
	** Do-while Loop
	*/
	char Selection {};
	do {
		cout << "1. option 1" << endl;
		cout << "2. option 2" << endl;
		cout << "3. option 3" << endl;
		cout << "4. option 4" << endl;
		cin >> Selection;
		switch (Selection)
		{
			case '1':
				cout << "Option 1" << endl;
				break;
			case '2':
				cout << "Option 2" << endl;
				break;
			case '3':
				cout << "Option 3" << endl;
				break;
			case '4':
				cout << "Option 4" << endl;
				break;
			default:
				cout << "BYEBYE" << endl;
		}
	} while (Selection != 'q' && Selection != 'Q');
}

void	ForLoops()
{
	/*
	** For Loops
	*/
	for (int Counter {0}; Counter < 10; Counter++)
		cout << Counter << endl;

	for (int Counter {0}; Counter < 10; Counter+=2)
		cout << Counter << endl;

	for (int Counter {10}; Counter > 0; Counter--)
		cout << Counter << endl;

	for (int Counter {10}; Counter < 100; Counter+=10)
		if (Counter % 15 == 0)
			cout << Counter << endl;

	for (int i {0}, j {5}; i <= 5; i++, j++)
		cout << i << " + " << j << " = " << i+j << endl;

	for (int i {0}; i < 100; i++)
		if (i % 10 == 0)
			cout << i << endl;
		else
			cout << i << " ";

	for (int i {0}; i < 100; i++)
		cout << i << ((i % 10 == 0) ? "\n" : " ");

	vector<int> Nums {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	for (unsigned int i {0}; i < Nums.size(); i++)
		cout << Nums.at(i) << endl;
}

void	RangeBasedForLoops()
{
	/*
	** Range-based For Loop
	*/
	int Scores [] {100, 98, 87};
	for (auto Score : Scores)
		cout << Score << endl;

	vector<double> Temps {87.2, 77.1, 80.0, 72.5};

	double AverageTemp {0};
	double RunningSum {0};
	for (auto Temp : Temps)
		RunningSum += Temp;
	if (Temps.size() != 0)
		AverageTemp = RunningSum / Temps.size();
	cout << fixed << setprecision(2) << AverageTemp << endl;

	for (auto Val : {1, 2, 3, 4, 5})
		cout << Val << endl;

	for (auto C : "This is a C-Style String")
		cout << C;
}

void	ConditionalOperators()
{
	int Num {};
	int Num01{}, Num02{};

	cout << "Enter an integer: ";
	cin >> Num;

	if (Num % 2 == 0) 
		cout << Num << " is even" << endl;
	else
		cout << Num << " is odd" << endl;

	cout << Num << " is " << ( (Num %2 ==0) ? "even" : "odd"  ) << endl;

	
	cout << "Enter two integers separated by a space: ";
	cin >> Num01 >> Num02;
	
	if (Num01 != Num02)
	{
		cout << "Largest: " << ( (Num01 > Num02) ? Num01 : Num02 ) << endl;
		cout << "Smallest: " << ( (Num01 < Num02) ? Num01 : Num02) << endl;
	}
	else
		cout << "The numbers are the same" << endl;

	cout  << endl;
}

void	Switch()
{
	char LetterGrade {};
	
	cout << "Enter the letter grade you expect on the exam: ";
	cin >> LetterGrade;
	LetterGrade = toupper(LetterGrade);
	
	switch (LetterGrade) {
		case 'A':
			cout << "You need a 90 or above, study hard!" << endl;
			break;
		case 'B':
			cout << "You need 80-89 for a B, go study!" << endl;
			break;
		case 'C':
			cout << "You need 70-79 for an average grade" << endl;
			break;
		case 'D':
			cout << "Hmm, you should strive for a better grade. All you need is 60-69" << endl;
			break;
		case 'F':
		{
			char Confirm {};
			cout << "Are you sure (Y/N)? ";
			cin >> Confirm;
			if (Confirm == 'y' || Confirm == 'Y') 
				cout << "OK, I guess you didn't study..." << endl;
			else if (Confirm == 'n' || Confirm == 'N')
				cout << "Good- go study!" << endl;
			else 
				cout << "Illegal choice" << endl;
			break;
		}
		default:
			cout << "Sorry, not a valid grade" << endl;
	}

	cout << endl; 
}

void	SwitchEnum()
{
	enum Direction {
		Left, Right, Up, Down
	};

	Direction Heading {Left};

	switch (Heading) {
		case Left:
			cout << "Going left" << endl;
			break;
		case Right:
			cout << "Going right" << endl; // I used going left in the video by mistake
			break;
		default:
			cout << "OK" << endl;
	}

	cout <<  endl;
}

void	LoopChallenge()
{
	vector<int>	Nums {45, 23, 56, 87, 45, 77, 87};
	char		UserSelection {};
	double		UserInput {};
	double		Total {0};
	double		Mean {0};
	double		SmallestNumber {0};
	double		LargestNumber {0};

	do {
		cout << "P - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit" << endl;
		cin >> UserSelection;
		UserSelection = toupper(UserSelection);
		switch (UserSelection)
		{
			case 'P':
				for (auto Num : Nums)
					cout << Num << " ";
				cout << endl;
				break;
			case 'A':
				cout << "Please enter a number you'd like to add to the list: ";
				cin >> UserInput;
				Nums.push_back(UserInput);
				for (auto Num : Nums)
					cout << Num << " ";
				cout << endl;
				break;
			case 'M':
				for (auto Num : Nums)
					Total += Num;
				Mean = Total / Nums.size();
				cout << Mean << endl;
				break;
			case 'S':
				SmallestNumber = *min_element (Nums.begin(), Nums.end());
				cout << SmallestNumber << endl;
				break;
			case 'L':
				LargestNumber = *max_element (Nums.begin(), Nums.end());
				cout << LargestNumber << endl;
				break;
			case 'Q':
				break;
			default:
				break;
		}
	} while (UserSelection != 'Q');
}

void	Shipping()
{
	int			Length{}, Width{}, Height{};
	double		BaseCost {2.50};
	
	const int	Tier01 {100};    // volume
	const int	Tier02 {500};    // volume
	
	int			MaxDimensionLength  {10};  // inches
	
	double		Tier01Surcharge {0.10};  // 10% extra
	double		Tier02Surcharge {0.25};  // 25% extra
	
	// All dimension must be 10 inches or less
	
	int			PackageVolume{};
	
	cout << "Welcome to the package cost calculator" << endl;
	cout << "Enter Length, Width, and Height of the package separated by spaces : ";
	cin >> Length >> Width >> Height;
	
	if (Length > MaxDimensionLength || Width > MaxDimensionLength || Height > MaxDimensionLength)
		cout << "Sorry, package rejected - dimension exceeded" << endl;
	else
	{
		double PackageCost {};
		PackageVolume= Length * Width * Height;
		PackageCost = BaseCost;
		
		if (PackageVolume > Tier02)
		{
			PackageCost += PackageCost * Tier02Surcharge;
			cout << " adding tier 2 surcharge" << endl;
		}

		else if ( PackageVolume > Tier01)
		{
			PackageCost += PackageCost * Tier01Surcharge;
			cout << " adding tier 1surcharge" << endl;
		}

		cout << fixed << setprecision(2); // prints dollars nicely
		cout << "The volume of your package is: " << PackageVolume << endl;
		cout << "Your package will cost $" << PackageCost << " to ship " << endl;
	}
	cout << endl;
}

void	MultiplicationTable()
{
	for (int num1 {1}; num1 <=10 ; ++num1)
		for (int num2 {1}; num2 <=10; ++num2)
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << "-----------" << endl << endl;
}

void	If()
{
	int Num {};
	const int Min {10};
	const int Max {100};
	
	cout << "Enter a number between " << Min << " and " << Max << ": ";
	cin >> Num;
	
	if (Num >= Min) {
		cout << "\n=========== If statement 1 =============" << endl;
		cout << Num << " is greater than or equal to " << Min << endl;
	  
		int Diff {Num - Min};
		cout << Num << " is " << Diff << " greater than " << Min << endl;
	}
	
	if (Num <= Max) {
		cout << "\n=========== If statement 2=============" << endl;
		cout << Num << " is less than or equal to " << Max << endl;
		
		int Diff {Max - Num};
		cout << Num << " is " << Diff << " less than " << Max << endl;
	}
	
	if (Num >= Min && Num <=Max) {
	  cout << "\n=========== If statement 3=============" << endl;   
	  cout << Num << " is in range " << endl;
	  cout << " This means satements 1 and 2 must also display!!" << endl;
	}
	
	if (Num == Min || Num == Max) {
		cout << "\n=========== If statement 4 =============" << endl;   
		cout << Num << " is right on a boundary " << endl;
		cout << "This means all 4 statements display " << endl;

	}
	
	cout << endl;
}

void	IfElse()
{
	int Num{};
	const int Target {10};

	cout << "Enter a number  and I'll compare it to " << Target << ": ";
	cin >> Num;
	
	if (Num >= Target) {
		cout << "\n==================================" << endl;
		cout << Num << " is greater than or equal to " << Target << endl;
		int Diff { Num - Target};
		cout << Num << " is " << Diff << " greater than " << Target << endl;
	} else {
		cout << "\n==================================" << endl;
		cout << Num << " is less than " << Target << endl;
		int Diff { Target - Num};
		cout << Num << " is " << Diff << " less than " << Target << endl;
	}
	cout  << endl;
}
