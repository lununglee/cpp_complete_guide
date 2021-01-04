#include "I_Print.h"

ostream &operator<<(ostream &os, I_Print &account)
{
	account.print(os);
	return os;
}
