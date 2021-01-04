#include "I_Print.h"

ostream &operator<<(ostream &os, const I_Print &acc)
{
	acc.print(os);
	return os;
}
