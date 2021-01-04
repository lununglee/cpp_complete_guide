#include <iostream>
#include <deque>
#include <string>

void	Display(const std::deque<int> &Vec)
{
	std::cout << "[ ";
	std::for_each(Vec.begin(), Vec.end(), [] (int X)
	{
		std::cout << X << " ";
	});
	std::cout << "]" << std::endl;
}

int		main(void)
{
	std::cout << "==================== INIT ====================" << std::endl;
	
	std::deque<int>			Nums_00 {1, 2, 3, 4, 5};
	std::deque<int>			Nums_01 (5, 100);
	Display(Nums_00);
	Display(Nums_01);

	std::deque<std::string>	Stooges
	{
		std::string("Larry"),
		"Moe",
		std::string("Curly")
	};
	for (const auto &Name : Stooges)
		std::cout << Name << ", ";
	std::cout << std::endl;

	Nums_00 = {2, 4, 6, 8, 10};

	Nums_00.push_back(12);
	Nums_00.push_front(0);
	Display(Nums_00);

	std::cout << std::endl;

	// DEQUE IS PRETTY MUCH THE SAME AS VECTOR IN TERMS OF METHODS AVAILABLE

	return (0);
}