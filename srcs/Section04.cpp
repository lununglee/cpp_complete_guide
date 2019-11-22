#include "../Includes/Header.h"

void	HelloWorld()
{
	cout << "Hello World" << endl;
}

// Will display a linker error since extern x links to nothing
void	LinkerError()
{
	// extern int x;

	// cout << "Hello World" << endl;
	// cout << "The value of 'X' is: " << x << endl;
}

// -Wall -Wextra -Werror flag will casue erro (unused-variables)
void	CompilerWarning()
{
	// int	Number;

	// cout << "This function will give a compiler warning but since I added the 3W flags, it'll be promoted into an error" << endl;
}

// Can't operate math algorithms on string
void	CompilerError()
{
	// cout << ("Hello World" / 125) << endl;
}

void	SectionChallenge()
{
	int	PlayerGuess;

	cout << "Please enter your favorite number between 1-100" << endl;
	cin >> PlayerGuess;
	ClearInput();
	cout << "Oh wow! That is my favorite number" << endl;
	cout << "No really! " << PlayerGuess << " IS my favorite number!" << endl;
}
