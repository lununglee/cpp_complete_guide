#include <iostream>
#include <vector>
#include <algorithm>

class	Person
{
	friend std::ostream	&operator<<(std::ostream &OS, const Person &Rhs)
	{
		OS << Rhs.Name << ": " << Rhs.Age;
		return OS;
	}

	private:
	std::string	Name;
	int			Age;

	public:
	Person() = default;
	Person(std::string InitName, int InitAge)
	: Name {InitName}, Age {InitAge}
	{ }
	~Person() = default;

	bool	operator==(const Person &Rhs) const { return (this->Age == Rhs.Age && this->Name == Rhs.Name); }
	bool	operator<(const Person &Rhs) const { return (this->Age < Rhs.Age); }
};

template<typename T>
void	DisplayRangedLoop(std::vector<Person> &Vec)
{
	std::cout << "[ ";
	for (const auto &Element : Vec)
		std::cout << Element << " ";
	std::cout << "]" << std::endl;
}

void	DisplayForEach(std::vector<int> &Vec)
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
	std::vector<int>			Nums_00 {1, 2, 3, 4, 5};
	DisplayForEach(Nums_00);
	std::vector<int>			Nums_01 (10, 100);
	DisplayForEach(Nums_01);
	std::vector<std::string>	Names
	{
		std::string("Larry"),
		"Moe",
		std::string("Curly")
	};

	Nums_00 = {2, 4, 6, 8, 10};

	std::cout << "Size of vector: " << Nums_00.size() << std::endl;
	std::cout << "Capacity of vector: " << Nums_00.capacity() << std::endl;
	std::cout << "Max size of vector: " << Nums_00.max_size() << std::endl;
	std::cout << "Element 0: " << Nums_00.at(0) << std::endl;
	std::cout << "Element 1: " << Nums_00[1] << std::endl;
	std::cout << "First element: " << Nums_00.front() << std::endl;
	std::cout << "Last element: " << Nums_00.back() << std::endl;
	Nums_00.reserve(100);
	Nums_00.shrink_to_fit();
	// Nums_00.swap(Nums_01);
	std::cout << Nums_00.empty() << std::endl;

	auto	It {std::find(Nums_00.begin(), Nums_00.end(), 4)};
	// Nums_00.insert(It, 100);
	// for (const auto &Num : Nums_00)
	// 	std::cout << Num << " ";

	Nums_00.insert(It, Nums_01.begin(), Nums_01.end());
	for (const auto &Num : Nums_01)
		std::cout << Num << " ";
	std::cout << std::endl;

	std::vector<Person>	Stooges;

	Person				P1 {"Larry", 18};
	Stooges.push_back(P1);
	DisplayRangedLoop<std::vector<Person>>(Stooges);
	Stooges.push_back(Person {"Moe", 19});
	DisplayRangedLoop<std::vector<Person>>(Stooges);
	Stooges.emplace_back("Curly", 20);
	DisplayRangedLoop<std::vector<Person>>(Stooges);

	std::cout << "Front: " << Stooges.front() << std::endl;
	std::cout << "Back: " << Stooges.back() << std::endl;

	Stooges.pop_back();
	DisplayRangedLoop<std::vector<Person>>(Stooges);

	Nums_01.erase(Nums_01.begin(), Nums_01.begin() + 2);
	DisplayForEach(Nums_01);

	Nums_01 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	auto	Itt {Nums_01.begin()};
	while (Itt != Nums_01.end())
	{
		if (*Itt % 2 == 0)
			Nums_01.erase(Itt);
		else
			Itt++;
	}

	// COPY
	DisplayForEach(Nums_01);
	DisplayForEach(Nums_00);
	std::copy(Nums_01.begin(), Nums_01.end(), std::back_inserter(Nums_00));
	DisplayForEach(Nums_00);
	std::copy_if(Nums_01.begin(), Nums_01.end(), std::back_inserter(Nums_00), [] (int X) { return (X % 2 == 0); });
	DisplayForEach(Nums_00);

	// TRANSFORM
	std::vector<int>	T1 {1, 2, 3, 4, 5};
	std::vector<int>	T2 {2, 2, 2, 2, 2};
	std::vector<int>	T3;
	std::transform(T1.begin(), T1.end(), T2.begin(), std::back_inserter(T3), [] (int X, int Y)
	{
		return (X * Y);
	});

	DisplayForEach(T3);

	auto	Ittt {std::find(T1.begin(), T1.end(), 4)};
	T1.insert(Ittt, T2.begin(), T2.end());

	DisplayForEach(T1);

	return (0);
}
