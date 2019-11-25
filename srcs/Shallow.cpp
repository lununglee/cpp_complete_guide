#include "../Includes/Shallow.h"

// Constructors
Shallow::Shallow()
: Shallow {0}
{ }

Shallow::Shallow(int DataToSet)
{
	Data = new int;
	*Data = DataToSet;
}

// Copier
Shallow::Shallow(const Shallow &Source)
: Data {Source.Data}
{ }

// Destructor
Shallow::~Shallow()
{
	delete Data;
	std::cout << "Destructor in action" << std::endl;
}

// Getters
int		Shallow::GetData()
{
	return *Data;
}

// Setters
void	Shallow::SetData(int DataToSet)
{
	*Data = DataToSet;
}
