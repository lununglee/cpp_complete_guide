#ifndef I_PRINT_H_
#define I_PRINT_H_

#include <iostream>

using std::ostream;

class I_Print
{
	friend ostream &operator<<(ostream &os, const I_Print &acc);
	public:
	virtual void print(ostream &os) const = 0;
	virtual ~I_Print() = default;
};

#endif
