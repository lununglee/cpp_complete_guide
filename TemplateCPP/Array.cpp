#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <numeric>

int	main(void)
{
	std::cout << std::boolalpha;

	std::array<int, 5>	Nums {1, 2, 3, 4, 5};
	std::array<int, 5>	NumsSub {10, 20, 30, 40, 50};
	std::array<std::string, 3>	Names
	{
		std::string("Larry"),
		"Moe",
		std::string("Curly")
	};
	Nums = {2, 4, 6, 8, 10};

	std::cout << "Size of [Nums] is: " << Nums.size() << std::endl;
	std::cout << "Number at position 2 of [Nums] is: " << Nums.at(1) << std::endl;
	std::cout << "The first number in [Nums] is: " << Nums.front() << std::endl;
	std::cout << "The last number in [Nums] is: " << Nums.back() << std::endl;

	// Nums.fill(0); // set all members to 0

	std::cout << "Is the [Nums] array empty?: " << Nums.empty() << std::endl;

	// SWAP
	Nums.swap(NumsSub);

	std::cout << Nums.at(0) << std::endl;
	std::cout << NumsSub.at(0) << std::endl << std::endl;

	// GET RAW POINTER
	int	*Data = Nums.data();

	std::cout << "The address is: " << Data << std::endl;
	std::cout << "And the data at that address is: " << *Data << std::endl << std::endl;

	// SORT ARRAY
	std::array<int, 5>	SortList {2, 4, 1, 5, 3};
	std::sort(SortList.begin(), SortList.end());
	for (auto const &Num : SortList)
		std::cout << Num << " ";
	std::cout << std::endl << std::endl;

	// FIND MIN/MAX
	std::array<int, 5>::iterator	MaxNum {std::max_element(SortList.begin(), SortList.end())};
	auto							MinNum {std::min_element(SortList.begin(), SortList.end())};
	std::cout << "Highest value: " << *MaxNum << std::endl;
	std::cout << "Lowest value: " << *MinNum << std::endl;

	//ADJACENT FIND
	std::array<int, 5>	AdjacentList {1, 2, 3, 3, 4};
	auto				Location = std::adjacent_find(AdjacentList.begin(), AdjacentList.end());

	std::cout << *Location << " " << *(Location + 1) << std::endl << std::endl;

	// ACCUMULATE
	int	Sum {std::accumulate(AdjacentList.begin(), AdjacentList.end(), 0)};
	std::cout << Sum << std::endl << std::endl;

	// COUNT
	int	Count {static_cast<int>(std::count(AdjacentList.begin(), AdjacentList.end(), 3))};
	std::cout << Count << std::endl;

	// COUNT IF
	
	return (0);
}
