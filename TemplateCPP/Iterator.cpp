#include <iostream>
#include <string>
#include <vector>

int	main(void)
{
	std::vector<int> Nums {1, 2, 3};
	// std::vector<int>::iterator Iterator {Nums.begin()};
	auto Iterator {Nums.begin()};
	while (Iterator != Nums.end())
	{
		std::cout << *Iterator << " ";
		Iterator++;
	}
	std::cout << std::endl;
	for (auto Counter {Nums.begin()}; Counter != Nums.end(); Counter++)
		std::cout << *Counter << " ";
	std::cout << std::endl;

	std::vector<int> ReserverList {1, 2, 3};
	// std::vector<int>::reverse_iterator ReserverListIterator {ReserverList.rbegin()};
	auto ReserverListIterator {ReserverList.rbegin()};
	while (ReserverListIterator != ReserverList.rend())
	{
		std::cout << *ReserverListIterator << " ";
		ReserverListIterator++;
	}
	return (0);
}
