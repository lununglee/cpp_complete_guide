#include "../Includes/AccountInherit.h"

#include <iostream>

/*********************************
*            Ostream             *
*********************************/

ostream	&operator<<(ostream &OS, const AccountInherit &Source)
{
	OS << "[Account: " << Source.Name << " -> " << Source.Balance << "]" << endl;
	return OS;
}

/*********************************
*          Constructors          *
*********************************/

AccountInherit::AccountInherit(string NameToSet, double BalanceTosSet)
:	Name {NameToSet},
	Balance {BalanceTosSet}
{ }

/*********************************
*           Destructors          *
*********************************/


AccountInherit::~AccountInherit()
{ }

/*********************************
*            Setters             *
*********************************/

bool	AccountInherit::Deposit(double DepositAmount)
{
	// std::cout << "Account Deposit: " << DepositAmount << std::endl;
	if (DepositAmount < 0)
		return false;
	Balance += DepositAmount;
	return true;
}
bool	AccountInherit::Withdraw(double WithdrawAmount)
{
	// std::cout << "Account Withdraw: "<< WithdrawAmount << std::endl;
	if (Balance - WithdrawAmount < 0)
		return false;
	Balance -= WithdrawAmount;
	return true;
}

/*********************************
*            Getters             *
*********************************/

double	AccountInherit::GetBalance() const
{
	return Balance;
}
