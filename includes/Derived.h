#ifndef _DERIVED_H_
#define _DERIVED_H_

#include "Base.h"

class Derived : public Base
{
	private:
	int	DoubleValue;

	public:
	// COnstructors
	Derived();
	Derived(int ValueToSet);
	// Copier
	Derived(const Derived &Source);
	// Overloader
	Derived	&operator=(const Derived &Source);
	// Destructors
	~Derived();
};

#endif
