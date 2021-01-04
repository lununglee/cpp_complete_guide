#include <iostream>
#include <set>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

void	Display(std::map<std::string, int> &WordList)
{
	std::cout << std::setw(15) << "WORD" << std::setw(5) << "COUNT" << std::endl;
	std::cout << "====================" << std::endl;
	for (const auto &Word: WordList)
		std::cout << std::setw(15) << Word.first << std::setw(4) << Word.second << std::endl;
}

void	Display(std::map<std::string, std::set<int>> &WordList)
{
	std::cout << std::setw(15) << "WORD" << std::setw(5) << "COUNT" << std::endl;
	std::cout << "====================" << std::endl;
	for (const auto &Word: WordList)
	{
		std::cout << std::setw(15) << Word.first << ":[ ";
		for (auto &Arr : Word.second)
		{
			std::cout << Arr << " ";
		}
		std::cout << "]" << std::endl;
	}
}

void	Part_00()
{
	std::ifstream				File {"Words.txt"};
	std::map<std::string, int>	WordList {};
	std::string					Word {};

	// FILE ERROR
	if (File.is_open())
		std::clog << "File is opened" << std::endl;
	else
		std::cerr << "File is not opened" << std::endl;

	// READ EACH WORD
	while (File >> Word)
	{
		for (size_t Counter {0}, Len {Word.size()}; Counter < Len; Counter++)
		{
			if (ispunct(Word.at(Counter)))
			{
				Word.erase(Counter--, 1);
				Len = Word.size();
			}
		}
		auto	Result {WordList.insert(std::make_pair(Word, +1))};
		if (!Result.second)
			WordList[Word]++;
	}
	Display(WordList);
	File.close();
}

void	Part_00_Solution()
{
	std::ifstream				File {"Words.txt"};
	std::map<std::string, int>	WordList {};
	std::string					Word {};
	std::string					Line {};
	int							LineNumber {0};

	if (File)
	{
		while (std::getline(File, Line))
		{
			LineNumber++;
			std::stringstream	SS {Line};
			while (SS >> Word)
			{
				for (size_t Counter {0}, Len {Word.size()}; Counter < Len; Counter++)
				{
					if (ispunct(Word.at(Counter)))
					{
						Word.erase(Counter--, 1);
						Len = Word.size();
					}
				}
				WordList[Word]++;
			}
		}
		Display(WordList);
		File.close();
	}
	else
		std::cerr << "Error opening file" << std::endl;
	
}

void	Part_01()
{
	std::ifstream				File {"Words.txt"};
	std::map<std::string, std::set<int>>	WordList {};
	std::string								Line {};
	std::string								Word {};
	int										LineNumber {0};

	// FILE ERROR
	if (File.is_open())
		std::clog << "File is opened" << std::endl;
	else
		std::cerr << "File is not opened" << std::endl;

	while (std::getline(File, Line))
	{
		LineNumber++;
		std::stringstream	SS {Line};
		while (SS >> Word)
		{
			for (size_t Counter {0}, Len {Word.size()}; Counter < Len; Counter++)
			{
				if (ispunct(Word.at(Counter)))
				{
					Word.erase(Counter--, 1);
					Len = Word.size();
				}
			}
			WordList[Word].insert(LineNumber);
		}
	}
	Display(WordList);
	File.close();
}

int		main(void)
{
	Part_00_Solution();
	Part_01();
	return (0);
}
