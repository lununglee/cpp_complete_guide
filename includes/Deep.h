#ifndef _DEEP_H_
#define _DEEP_H_

#include <iostream>

class Deep
{
private:
	int		*Data;

public:
	// Constructor
	Deep();
	Deep(int DataToSet);

	// Copier
	Deep(const Deep &Source);

	// Destructor
	~Deep();

	// Getters
	int		GetData();

	// Setters
	void	SetData(int DataToSet);
};

#endif