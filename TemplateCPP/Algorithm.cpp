#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>

class Person
{
private:
	std::string	Name;
	int			Age;
public:
	Person();
	Person(std::string InitName, int InitAge)
	: Name {InitName}, Age {InitAge}
	{ }
	~Person() {}
	bool		operator<(const Person &Rhs) const
	{
		return this->Age < Rhs.Age;
	}
	bool		operator==(const Person &Rhs) const
	{
		return ((this->Age == Rhs.Age) && (this->Name == Rhs.Name));
	}
};

int	main(void)
{
	// FIND
	std::vector<int>	Nums {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	auto				Location {std::find(Nums.begin(), Nums.end(), 5)};
	if (Location != Nums.end())
		std::cout << "find: " << *Location << std::endl;
	std::cout << std::endl;

	// FOR EACH
	std::vector<int>	Vec {1, 2, 3, 4};
	std::cout << "for_each: ";
	std::for_each(Vec.begin(), Vec.end(),
		[] (int x) { std::cout << x * x << " "; });
	std::cout << std::endl;
	std::cout << std::endl;

	// FIND CLASS
	std::list<Person>	Players {
		{"Larry", 12},
		{"Moe", 15},
		{"Curly", 17}
	};

	// FIND CLASS
	auto				Found {std::find(Players.begin(), Players.end(), Person {"Moe", 35})};
	if (Found != Players.end())
		std::cout << "Find: Class Found" << std::endl;
	else
		std::cout << "Find: Class Not Found" << std::endl;
	std::cout << std::endl;

	// COUNT
	std::vector<int>	CountList {1, 2, 6, 5, 4, 1, 1, 1, 3, 4};
	int					Count {static_cast<int>(std::count(CountList.begin(), CountList.end(), 1))};
	std::cout << "count: " << Count << std::endl << std::endl;

	// COUNT IF
	std::vector<int>	CountIfList {1, 2, 3, 4, 5, 6, 7, 100, 10};
	int					Counter {static_cast<int>(std::count_if(CountIfList.begin(), CountIfList.end(), [] (int X)
						{
							return X % 2 == 0;
						}))};

	std::cout << "count_if: " << Counter << " even-numbers found" << std::endl << std::endl;
	std::cout << "count_if: " << CountIfList.size() - Counter << " odd-numbers found" << std::endl << std::endl;

	int					Greater {static_cast<int>(std::count_if(CountIfList.begin(), CountIfList.end(), [] (int X)
						{
							return X >= 5;
						}))};
	std::cout << "count_if: " << Greater << " numbers that are greater than 5" << std::endl << std::endl;

	// REPLACE
	std::vector<int>	ReplaceList {1, 2, 3, 4};
	std::replace(ReplaceList.begin(), ReplaceList.end(), 1, 100);
	for (const auto &Num : ReplaceList)
		std::cout << Num << " ";
	std::cout << std::endl;

	// ALL OF
	if (std::all_of(ReplaceList.begin(), ReplaceList.end(), [](int X){ return X < 10; }))
		std::cout << "all numbers are smaller than 10" << std::endl;
	else
		std::cout << "all numbers are greater than 10" << std::endl;

	// STRING TRANSFORM
	std::string	Str {"Hello world"};
	std::transform(Str.begin(), Str.end(), Str.begin(), ::toupper);
	std::cout << Str << std::endl;
	return (0);
}
