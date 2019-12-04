#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "SavingsAccountInherit.h"

class TrustAccount : public SavingsAccountInherit
{
	friend ostream &operator<<(ostream &OS, const TrustAccount &Source);

	private:
	static constexpr const char	*DefaultName {"Unnamed Trust Account"};
	static constexpr double		DefaultBalance {0.0};
	static constexpr double		DefaultInterestRate {0.0};
	static constexpr double		BonusAmount {50.0};
	static constexpr double		BonusThreshold {5000.0};
	static constexpr int		MaxWithdraw {3};
	static constexpr double		WithdrawLimit {0.2};

	protected:
	int							WithdrawCounter;

	public:
	TrustAccount(string Name = DefaultName, double BalanceToSet = DefaultBalance, double InterestRateToSet = DefaultInterestRate);
	~TrustAccount();
	bool	Deposit(double DepositAmount);
	bool	Withdraw(double WithdrawAmount);
};

#endif
