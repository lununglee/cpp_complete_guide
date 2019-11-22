#include "../Includes/Header.h"

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
			cout << UserInput[j];
		for (size_t k {j - 1}; k != 0 ; k--)
			cout << UserInput[k - 1];
		cout << endl;
	}
}

void	PrintSpaces(size_t Spaces)
{
	for (size_t i {0}; i < Spaces; i++)
		cout << " ";
}

// int main()
// {
// 	std::string letters{};

// 	std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
// 	getline(std::cin, letters);

// 	size_t num_letters = letters.length();

// 	int position {0};

// 	for (char c: letters) {
// 		size_t num_spaces = num_letters - position;
// 		while (num_spaces > 0) {
// 			std::cout << " ";
// 			--num_spaces;
// 		}
// 		for (size_t j=0; j < position; j++)
// 			std::cout << letters.at(j);
// 		std::cout << c;
// 		for (int j=position-1; j >=0; --j) {
// 			auto k = static_cast<size_t>(j);
// 			std::cout << letters.at(k);
// 		}
// 		std::cout << std::endl; // Don't forget the end line
// 		++position;
// 	}

// 	return 0;
// }