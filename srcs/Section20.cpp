#include "../Includes/Header.h"

void	Sort()
{
	std::vector<int>	Nums {5, 1, 3};

	std::sort(Nums.begin(), Nums.end());
	for (auto Num : Nums)
		std::cout << Num << std::endl;

	std::reverse(Nums.begin(), Nums.end());
	for (auto Num : Nums)
		std::cout << Num << std::endl;
	
	int					Sum {};
	Sum = std::accumulate(Nums.begin(), Nums.end(), 0);
	std::cout << Sum << std::endl;
}

void	Macros()
{
	#define MAX(a, b) ((a > b) ? a : b)

	std::cout << MAX(10, 20) << endl;
	std::cout << MAX(2.4, 3.5) << endl;
	std::cout << MAX('A', 'C') << endl;

	// #define SQUARE(a) a * a
	#define SQUARE(a) ((a) * (a))	// write this instead of the other
	int	Result = SQUARE(5);	// Expect 25
	Result = 5 * 5;			// Gets 25

	Result = 100/SQUARE(5);	// Expect 25
	Result = 100/5*5;		// Gets 100
	// Lesson is to put Macro arguments in parenthesis
}

// Instead of writing...
// int	Max(int A, int B)
// {
// 	return A > B ? A : B;
// }
// Write this instead...
template <typename T>
T Max(T A, T B)
{
	return A > B ? A : B;
}

struct Person
{
	std::string	Name;
	int			Age;
	bool operator>(const Person &Rhs) const
	{
		return this->Age > Rhs.Age;
	}
};

std::ostream &operator<<(std::ostream &OS, const Person &Rhs)
{
	OS << Rhs.Name << " | " << Rhs.Age << endl;
	return OS;
}

void	FunctionTemplates()
{
	int	A {10};
	int	B {20};
	double	C {12.5};
	double	D {45.6};
	cout << Max<int>(A, B) << endl;;
	cout << Max<double>(C, D) << endl;

	Person P1 {"Moe", 25};
	Person P2 {"Curly", 45};
	Person P3 = Max(P1, P2);
	cout << P3.Name << " is older" << endl;
	cout << P3 << P2 << P1;
}

// #include <iostream>
// #include <string>

// struct Person
// {
// 	std::string Name;
// 	int			Age;
// 	bool operator>(const Person &Rhs)
// 	{
// 		return this->Age > Rhs.Age;
// 	}
// };

// template <typename T>
// T Max(T A, T B)
// {
// 	return A > B ? A : B;
// }

// std::ostream &operator<<(std::ostream &OS, const Person &Source)
// {
// 	OS << Source.Name << " | " << Source.Age << std::endl;
// 	return OS;
// }

// int main()
// {
// 	Person P1 {"Joe", 20};
// 	Person P2 {"Curly", 35};
// 	Person P3 = Max(P1, P2);
// 	std::cout << P3;
// 	return 0;
// }