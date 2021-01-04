#ifndef I_PRINT_H_
#define I_PRINT_H_

#include <iostream>
using std::ostream;

class I_Print
{
	friend ostream &operator<<(ostream &os, I_Print &account);
	public:
	virtual void print(ostream &os) = 0;
};

#endif
