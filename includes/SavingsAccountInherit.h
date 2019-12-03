#ifndef _SAVINGS_ACCOUNT_INHERI_H_
#define _SAVINGS_ACCOUNT_INHERI_H_

#include "AccountInherit.h"

class SavingsAccountInherit : public AccountInherit
{
	friend	ostream &operator<<(ostream &OS, const SavingsAccountInherit &Source);

	private:
	static constexpr const char	*DefaultName {"Unnamed Account"};
	static constexpr double		DefaultBalance {0.0};
	static constexpr double		DefaultInterestRate {0.0};

	protected:
	double	InterestRate;

	public:
	SavingsAccountInherit(string Name = DefaultName, double BalanceToSet = DefaultBalance, double InterestRateToSet = DefaultInterestRate);
	~SavingsAccountInherit();
	bool						Deposit(double DepositAmount);
};

#endif
