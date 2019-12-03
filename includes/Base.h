#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>

using std::cout;
using std::endl;

class Base
{
	private:
	int	Value;

	public:
	// Constructors
	Base();
	Base(int ValueToSet);
	// Copier
	Base(const Base &Source);
	// Overloader
	Base &operator=(const Base &Source);
	// Destructors
	~Base();
};

#endif
