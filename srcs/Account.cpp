#include "../Includes/Account.h"

/*********************************
*          Constructors          *
*********************************/
Account::Account()
: Balance {0}, Name {"User"}
{ }

Account::Account(double BalanceToSet)
: Balance {BalanceToSet}, Name {"User"}
{ }

Account::Account(string NameToSet)
: Balance {0}, Name {NameToSet}
{ }

Account::Account(double BalanceToSet, string NameToSet)
: Balance {BalanceToSet}, Name {NameToSet}
{ }

/*********************************
*            Setters             *
*********************************/
void	Account::SetBalance(double BalanceToSet)
{
	Balance = BalanceToSet;
}
void	Account::SetName(string NameToSet)
{
	Name = NameToSet;
}
bool	Account::Deposit(double DepositAmount)
{
	Balance += DepositAmount;
	return true;
}
bool	Account::Withdraw(double WithdrawAmount)
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
double	Account::GetBalance()
{
	return Balance;
}

string	Account::GetName()
{
	return Name;
}
