#include <iostream>
#include <map>
#include <string>
#include <set>

/*
	- Similar to dictionary
	- Elements are stored as keys, value pairs (std::pair)
	- Ordered by Key
	- NO front/back
	- No Duplicate elements (keys are unique)
	- Direct element access using the key
	- All iterators are available and invalidate when corresponding element is deleted
*/

void	Display(std::map<std::string, std::set<int>> &Map)
{
	std::cout << "[ ";
	for (const auto &Elem : Map)
	{
		std::cout << Elem.first << ":[ ";
			for (const auto &SetElem : Elem.second)
				std::cout << SetElem << " ";
		std::cout << "] | ";
	}
	std::cout << std::endl;
}

template <typename X, typename Y>
void	Display(std::map<X, Y> &Vec)
{
	std::cout << "[ ";
	for (const auto &Elem : Vec)
		std::cout << Elem.first << " " << Elem.second << ", ";
	std::cout << "]" << std::endl;
}


int	main(void)
{
	std::map<std::string, int>			M1
	{
		{"Larry", 18},
		{"Moe", 25}
	};
	std::map<std::string, std::string>	M2
	{
		{"Delta", "Descartes"},
		{"Beta", "Locke"},
		{"Golf", "Berkeley"}
	};
	M2.size();		// 3
	M2.max_size();	// 3

	// Different ways to insert pair
	std::pair<std::string, std::string>	Temp {"Alpha", "McKinley"};
	M2.insert(Temp);
	M2.insert(std::make_pair("Charlie", "Skyline"));

	M2["Frank"] = "Sinatra";		// insert
	M2.at("Frank") = "Sinatra Jr.";	// update

	Display(M2);

	M2.erase("Alpha");

	if (M2.find("Beta") != M2.end())
		std::cout << "Found" << std::endl;
	
	auto	It {M2.find("Charlie")};
	if (It != M2.end())
		M2.erase(It);

	Display(M2);

	std::map<std::string, std::set<int>>	Grades
	{
		{"Larry", {100,90}},
		{"Moe", {94}},
		{"Curly", {80, 90, 100}}
	};
	Display(Grades);

	Grades["Larry"].insert(95);
	Display(Grades);
	
	auto	Itt {Grades.find("Moe")};
	if (Itt != Grades.end())
		Itt->second.insert(1000);
	Display(Grades);

	return (0);
}
