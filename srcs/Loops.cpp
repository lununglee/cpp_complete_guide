#include "../includes/Header.h"

void	Loops()
{
	/*
	** For Loops
	*/
	// for (int Counter {0}; Counter < 10; Counter++)
	// 	cout << Counter << endl;

	// for (int Counter {0}; Counter < 10; Counter+=2)
	// 	cout << Counter << endl;

	// for (int Counter {10}; Counter > 0; Counter--)
	// 	cout << Counter << endl;

	// for (int Counter {10}; Counter < 100; Counter+=10)
	// 	if (Counter % 15 == 0)
	// 		cout << Counter << endl;

	// for (int i {0}, j {5}; i <= 5; i++, j++)
	// 	cout << i << " + " << j << " = " << i+j << endl;

	// for (int i {0}; i < 100; i++)
	// 	if (i % 10 == 0)
	// 		cout << i << endl;
	// 	else
	// 		cout << i << " ";

	// for (int i {0}; i < 100; i++)
	// 	cout << i << ((i % 10 == 0) ? "\n" : " ");

	// vector<int> Nums {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	// for (unsigned int i {0}; i < Nums.size(); i++)
	// 	cout << Nums.at(i) << endl;

	/*
	** Range-based For Loop
	*/
	// int Scores [] {100, 98, 87};
	// for (auto Score : Scores)
	// 	cout << Score << endl;

	// vector<double> Temps {87.2, 77.1, 80.0, 72.5};

	// double AverageTemp {0};
	// double RunningSum {0};
	// for (auto Temp : Temps)
	// 	RunningSum += Temp;
	// if (Temps.size() != 0)
	// 	AverageTemp = RunningSum / Temps.size();
	// cout << fixed << setprecision(2) << AverageTemp << endl;

	// for (auto Val : {1, 2, 3, 4, 5})
	// 	cout << Val << endl;

	// for (auto C : "This is a C-Style String")
	// 	cout << C;

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