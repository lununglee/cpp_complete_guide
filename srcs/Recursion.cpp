#include "../Includes/Header.h"

unsigned long long	Factorial(unsigned long long Num)
{
	if (Num == 0)
		return 1;
	return Num * Factorial(Num - 1);
}
