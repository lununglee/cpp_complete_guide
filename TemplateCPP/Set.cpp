#include <iostream>
#include <string>
#include <set>

/* 
	- Similar to math sets
	- Ordered by Key
	- No Duplicate
	- No Front/Back
	- All iterators are available and invalidate when corresponding element is deleted
	- multiset CAN have duplicates
	- unordered set are unordered but no duplicates are allowed
	- unodered multiset CAN have duplicates and are unordered | NO reverse iterators!
 */

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

template <typename T>
void	Display(std::set<T> &Vec)
{
	std::cout << "[ ";
	for (const auto &Elem : Vec)
		std::cout << Elem << " ";
	std::cout << "]" << std::endl;
}

int	main(void)
{
	std::set<int>			NumSet {1, 2, 3, 4, 5};				// NO front or back
	Display(NumSet);
	std::set<int>			NumSetDup {4, 1, 1, 3, 3, 2, 5};	// Will end up with 1 2 3 4 5 becasue duplicates are ignored
	Display(NumSetDup);

	NumSet.insert(0);
	Display(NumSet);
	NumSetDup.insert(10);
	Display(NumSetDup);

	auto	It = NumSet.find(3);
	if (It != NumSet.end())
		std::cout << "Found" << std::endl;

	NumSet = {2, 4, 6, 8, 10};

	NumSet.erase(3);			// 1 2 4 5

	// PREFERRED THIS WAY
	auto	Iterator {NumSet.find(5)};
	if (Iterator != NumSet.end())
		NumSet.erase(Iterator);	// 1 2 5

	std::set<Person>	Stooges
	{
		{std::string("Larry"), 18},
		{std::string("Moe"), 19},
		{std::string("Curly"), 20}
	};
	Display(Stooges);

	auto	Itt {Stooges.find(Person{"Moe", 19})};
	if (Itt != Stooges.end())
		Stooges.erase(Itt);
	Display(Stooges);

	Stooges.emplace("James", 50);
	Stooges.emplace("Frank", 50);	// NO - 50 already exists
	Display(Stooges);

	auto	Ittt {Stooges.find(Person{"XXXX", 50})}; // Will delete James, name dont matter because <operator compares age
	if (Ittt != Stooges.end())
		Stooges.erase(Ittt);
	Display(Stooges);

	std::set<std::string>	Alpha {"A", "B", "C"};
	Display(Alpha);

	auto	Result {Alpha.insert("D")};
	std::cout << std::boolalpha;
	std::cout << *(Result.first) << std::endl;
	std::cout << Result.second << std::endl;

	return (0);
}
