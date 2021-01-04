#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <string>
#include <iterator> // for std::advance()

class Person
{
	friend std::ostream	&operator<<(std::ostream &OS, const Person Rhs)
	{
		OS << Rhs.Name << ": " << Rhs.Age;
		return (OS);
	}
	
	private:
	std::string			Name;
	int					Age;
	
	public:
	Person(std::string InitName, int InitAge)
	: Name {InitName}, Age {InitAge}
	{ }
	Person()
	: Person {"Unknown", 0}
	{ }
	~Person() = default;
	bool				operator<(const Person Rhs)
	{
		return (this->Age < Rhs.Age);
	}
	bool				operator==(const Person Rhs)
	{
		return (this->Age == Rhs.Age && this->Name == Rhs.Name);
	}
};

template <typename T>
void	Display(std::list<T> &Vec)
{
	std::cout << "[ ";
	for (const auto &Elem : Vec)
		std::cout << Elem << " ";
	std::cout << "]" << std::endl;
}

int		main(void)
{
	std::list<int>			l {1, 2, 3, 4, 5};
	Display<int>(l);
	std::list<int>			ll {10, 20};
	Display<int>(ll);
	std::list<std::string>	lll
	{
		std::string("Larry"),
		"Moe",
		std::string("Curly")
	};
	Display<std::string>(lll);
	ll = {8, 9};
	Display<int>(ll);
	
	lll.push_back("Back");
	lll.push_front("Front");
	Display(lll);
	
	std::list<Person>	Persons;
	Persons.resize(5);
	Display(Persons);

	// same as vector and deque

	auto	It {std::find(l.begin(), l.end(), 3)};
	l.insert(It, 10);	// 1, 2, 10, 3, 4, 5
	l.erase(It);		// 1, 2, 10, 4, 5
	l.resize(2);		// 1, 2
	l.resize(10);		// 1, 2, 0, 0, 0

	// sort function uses "operator<()"

	return (0);
}