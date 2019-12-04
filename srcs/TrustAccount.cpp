#include "../Includes/TrustAccount.h"

ostream	&operator<<(ostream &OS, const TrustAccount &Source)
{
	OS << "[Trust Account: " << Source.Name << " -> " << Source.Balance << "]" << endl;
	return OS;
}

TrustAccount::TrustAccount(string NameToSet, double BalanceToSet, double InterestRateToSet)
: SavingsAccountInherit {NameToSet, BalanceToSet, InterestRateToSet}, WithdrawCounter {0}
{ }

TrustAccount::~TrustAccount()
{ }

bool	TrustAccount::Deposit(double DepositAmount)
{
	if (DepositAmount >= BonusThreshold)
		DepositAmount += BonusAmount;
	return SavingsAccountInherit::Deposit(DepositAmount);
}

bool	TrustAccount::Withdraw(double WithdrawAmount)
{
	if (WithdrawCounter >= WithdrawLimit || (Balance * WithdrawLimit) < WithdrawAmount)
		return false;
	WithdrawCounter++;
	return SavingsAccountInherit::Withdraw(WithdrawAmount);
}