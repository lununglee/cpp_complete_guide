#include "../Includes/Derived.h"

// Constructors
Derived::Derived()
:	Base {},
	DoubleValue {0}
{ cout << "Derived no-args constructor" << endl; }

Derived::Derived(int ValueToSet)
:	Base {ValueToSet},
	DoubleValue {ValueToSet * 2}
{ cout << "Derived args constructor " << DoubleValue << endl; }

// Copier
Derived::Derived(const Derived &Source)
:	Base {Source},
	DoubleValue {Source.DoubleValue}
{ cout << "Derived copy constructor" << endl; }

// Overloader
Derived	&Derived::operator=(const Derived &Source)
{
	if (this == &Source)
		return *this;
	cout << "Derived copy overloader" << endl;
	Base::operator=(Source);
	DoubleValue = Source.DoubleValue;
	return *this;
}

// Destructors
Derived::~Derived()
{ cout << "Derived destructor" << endl; }
