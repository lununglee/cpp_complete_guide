#include "../includes/Header.h"

void	Sastantua()
{
	string UserInput {};
	getline(cin, UserInput);
	size_t InputLength = UserInput.length();

	for (size_t i {0}; i < UserInput.length(); i++)
	{
		size_t j {0};
		PrintSpaces(InputLength - i - 1);
		for (; j < i + 1; j++)
		{
			cout << UserInput[j];
		}
		for (size_t k {j - 1}; k != 0 ; k--)
		{
			cout << UserInput[k - 1];
		}
		cout << endl;
	}
}

void	PrintSpaces(size_t Spaces)
{
	for (size_t i {0}; i < Spaces; i++)
		cout << " ";
}
