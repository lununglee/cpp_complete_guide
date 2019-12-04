#include "../Includes/CheckingAccount.h"

ostream	&operator<<(ostream &OS, const CheckingAccount &Source)
{
	OS << "[Checking Account: " << Source.Name << " -> " << Source.Balance << "]" << endl;
	return OS;
}

CheckingAccount::CheckingAccount(string NameToSet, double BalanceToSet)
: AccountInherit {NameToSet, BalanceToSet}
{ }

CheckingAccount::~CheckingAccount()
{ }

bool	CheckingAccount::Withdraw(double WithdrawAmount)
{
	if (Balance - (WithdrawAmount + DefaultWithdrawFee) < 0)
		return false;
	WithdrawAmount += DefaultWithdrawFee;
	return AccountInherit::Withdraw(WithdrawAmount);
}
