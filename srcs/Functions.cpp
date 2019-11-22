#include "../includes/Header.h"

void	SectionChallenge_11()
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

void	PrintMenu()
{
	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "Q - Quit" << endl;
}

char	GetUserInput()
{
	char UserSelection;
	cin >> UserSelection;
	UserSelection = toupper(UserSelection);
	return UserSelection;
}

void	PrintHandler(const vector<int> &Numbers)
{
	for (auto Num : Numbers)
		cout << Num << " ";
	cout << endl;
}
void	AddHandler(vector<int> &Numbers)
{
	int UserInput;
	cout << "Please enter a number you'd like to add to the list: ";
	cin >> UserInput;
	Numbers.push_back(UserInput);
}

void	MeanHandler(const vector<int> &Numbers)
{
	int Total {0};
	int Mean {0};
	for (auto Num : Numbers)
		Total += Num;
	Mean = Total / Numbers.size();
	cout << Mean << endl;
}

void		SmallestHandler(const vector<int> &Numbers)
{
	int SmallestNumber {0};
	SmallestNumber = *min_element (Numbers.begin(), Numbers.end());
	cout << SmallestNumber << endl;
}

void		LargestHandler(const vector<int> &Numbers)
{
	int LargestNumber {0};
	LargestNumber = *min_element (Numbers.begin(), Numbers.end());
	cout << LargestNumber << endl;
}

bool	FindHandler(const vector<int> &Numbers)
{
	int target;
	cout << "What number you want?" << endl;
	cin >> target;
	for (auto Num : Numbers)
		if (Num == target)
			return true;
	return false;
}
