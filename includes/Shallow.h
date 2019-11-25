#ifndef _SHALLOW_H_
#define _SHALLOW_H_

#include "Header.h"

class Shallow
{
private:
	int		*Data;

public:
	// Constructor
	Shallow();
	Shallow(int DataToSet);

	// Copier
	Shallow(const Shallow &Source);

	// Destructor
	~Shallow();

	// Getters
	int		GetData();

	// Setters
	void	SetData(int DataToSet);
};

#endif
