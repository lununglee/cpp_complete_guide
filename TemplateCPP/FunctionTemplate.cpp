#include <iostream>
#include <string>

struct			Person
{
	std::string	Name;
	int			Age;
	bool		operator<(const Person &Source)
	{
		return this->Age < Source.Age;
	}
};

template <typename T>
T	Min(T X, T Y)
{
	return X < Y ? X : Y;
}

std::ostream	&operator<<(std::ostream &OS, const Person Source)
{
	OS << "Name: [" <<Source.Name << "] | Age: [" << Source.Age << "]" << std::endl;
	return OS;
}

int				main(void)
{
	Person P1 {"Moe", 35};
	Person P2 {"Curly", 20};
	Person P3 {Min(P1, P2)};
	std::cout << P3;
	return (0);
}