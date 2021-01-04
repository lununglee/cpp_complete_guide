#include "../Includes/Deep.h"

/*********************************
*          Constructors          *
*********************************/

Deep::Deep()
: Deep {0}
{ }

Deep::Deep(int DataToSet)
{
	Data = new int;
	*Data = DataToSet;
}

/*********************************
*             Copier             *
*********************************/

Deep::Deep(const Deep &Source)
: Deep {*Source.Data}
{
	Data = new int;
	*Data = *Source.Data;
}

/*********************************
*           Destructors          *
*********************************/

Deep::~Deep()
{
	delete Data;
	std::cout << "Destructor in action" << std::endl;
}

/*********************************
*            Getters             *
*********************************/

int		Deep::GetData()
{
	return *Data;
}

/*********************************
*            Setters             *
*********************************/

void	Deep::SetData(int DataToSet)
{
	*Data = DataToSet;
}
