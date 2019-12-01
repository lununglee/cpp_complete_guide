#include "../Includes/SavingsAccount.h"

/*********************************
*          Constructors          *
*********************************/

SavingsAccount::SavingsAccount()
: SavingsAccount {0, "User"}
{ }

SavingsAccount::SavingsAccount(double BalanceToSet)
: SavingsAccount {BalanceToSet, "User"}
{ }

SavingsAccount::SavingsAccount(string NameToSet)
: SavingsAccount {0, NameToSet}
{ }

SavingsAccount::SavingsAccount(double BalanceToSet, string NameToSet)
:	Balance {BalanceToSet},
	Name {NameToSet}
{ }

/*********************************
*            Setters             *
*********************************/

void	SavingsAccount::SetName(string NameToSet)
{
	Name = NameToSet;
}
bool	SavingsAccount::Deposit(double DepositAmount)
{
	Balance += DepositAmount;
	return true;
}
bool	SavingsAccount::Withdraw(double WithdrawAmount)
{
	if (Balance - WithdrawAmount >= 0)
	{
		Balance -= WithdrawAmount;
		return true;
	}
	else
		return false;
}

/*********************************
*            Getters             *
*********************************/
double	SavingsAccount::GetBalance()
{
	return Balance;
}

string	SavingsAccount::GetName()
{
	return Name;
}
