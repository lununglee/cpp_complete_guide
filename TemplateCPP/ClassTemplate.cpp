#include <iostream>
#include <string>
#include <vector>

// Put all template classes in the header files, not CPP files
template <typename T>
class	Item
{
	private:
	std::string	Name;
	T			Price;

	public:
	Item(std::string NameToSet, T PriceToSet)
	: Name {NameToSet}, Price {PriceToSet}
	{ }
	std::string	GetName() const
	{ return Name; }
	T			GetPrice() const
	{ return Price; }
};

template <typename C, typename D>
class MyPair
{
	private:
	C	First;
	D	Second;

	public:
	MyPair(C FirstToSet, D SecondToSet)
	: First {FirstToSet}, Second {SecondToSet}
	{ }
	C	GetFirst() { return First; }
	D	GetSecond() { return Second; }
};

int	main(void)
{
	Item<std::string>			Banana {"Banana", "FREEEEEEEE"};
	std::cout << Banana.GetPrice() << std::endl;

	MyPair<std::string, double>	Apple {"Apple", 10.5};
	std::cout << Apple.GetFirst() << " | " << Apple.GetSecond() << std::endl;

	std::vector<MyPair<int, double>> Vector;

	Item <Item<std::string>> Nested {"Frank", {"CPP", "Professor"}};
	std::cout << Nested.GetName() << std::endl;
	std::cout << Nested.GetPrice().GetName() << std::endl;
	std::cout << Nested.GetPrice().GetPrice() << std::endl;

	std::vector<Item<double>> DoubleVector {};
	DoubleVector.push_back(Item<double>("Larry", 100.0));
	DoubleVector.push_back(Item<double>("Moe", 200.0));
	DoubleVector.push_back(Item<double>("Curly", 300.0));

	for (const auto &Element : DoubleVector)
		std::cout << Element.GetName() << std::endl;

	return (0);
}