#include <iostream>
#include <string>

template <typename T, int N>
class	Array
{
	private:
	int	Size {N};
	T	Value [N];

	friend std::ostream	&operator<<(std::ostream &OS, const Array<T, N> &Rhs)
	{
		OS << "[ ";
		for (const auto &Val : Rhs.Value)
			OS << Val << " ";
		OS << "]" << std::endl;
		return OS;
	}

	public:
	// Constructor
	Array() = default;
	Array(T InitVal)
	{
		for (auto &Val : Value)
			Val = InitVal;
	} 

	// Setter
	void	Fill(T ValToSet)
	{
		for (auto &Val : Value)
			Val = ValToSet;
	}

	// Getter
	int		GetSize() const
	{
		return Size;
	}

	// Overloader
	T		&operator[] (int Index)
	{
		return Value[Index];
	}
};

int	main(void)
{
	Array<int, 5>	Nums;
	std::cout << Nums.GetSize() << std::endl;
	Nums.Fill(0);
	std::cout << Nums;

	Array<std::string, 10> Str {std::string{"Frank"}};
	std::cout << Str.GetSize() << std::endl;
	std::cout << Str;
	return (0);
}
