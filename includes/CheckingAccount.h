#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "AccountInherit.h"

class CheckingAccount : public AccountInherit
{
	friend ostream &operator<<(ostream &OS, const CheckingAccount &Source);

	private:
	static constexpr const char	*DefaultName {"Unnamed Checking Account"};
	static constexpr double		DefaultBalance {0.0};
	static constexpr double		DefaultWithdrawFee {1.50};

	public:
	CheckingAccount(string NameToSet = DefaultName, double BalanceTosSet = DefaultBalance);
	~CheckingAccount();
	bool					Withdraw(double WithdrawAmount);
};

#endif
