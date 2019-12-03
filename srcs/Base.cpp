#include "../Includes/Base.h"

// Constructors
Base::Base()
: Value {0}
{ cout << "Base no-args constructor" << endl; }

Base::Base(int ValueToSet)
: Value {ValueToSet}
{ cout << "Base arg constructor " << Value << endl; }

// Copier
Base::Base(const Base &Source)
: Value {Source.Value}
{ cout << "Base copy constructor" << endl; }

// Overloader
Base &Base::operator=(const Base &Source)
{
	cout << "Base copy overloader" << endl;
	if (this == &Source)
		;
	else
		Value = Source.Value;
	return *this;
}

// Destructors
Base::~Base()
{ cout << "Base destructor" << endl; }
