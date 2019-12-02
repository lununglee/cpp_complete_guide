#ifndef _SAVINGS_ACCOUNT_INHERI_H_
#define _SAVINGS_ACCOUNT_INHERI_H_

#include "AccountInherit.h"

class SavingsAccountInherit : public AccountInherit
{
	public:
	SavingsAccountInherit();
	~SavingsAccountInherit();
	void	Deposit(double DepositAmount);
	void	Withdraw(double WithdrawAmount);
};

#endif
