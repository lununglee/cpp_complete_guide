#include "../includes/main.h"

void	ClearInput()
{
	std::cin.clear();
	std::cin.ignore();
}

int		main(void)
{
	int	PlayerGuess;

	std::cout << "Please enter your favorite number between 1-100" << std::endl;
	std::cin >> PlayerGuess;
	ClearInput();
	std::cout << "Your guess is: " << PlayerGuess << std::endl;
	return (0);
}
