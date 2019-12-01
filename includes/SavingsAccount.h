#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "Header.h"

class SavingsAccount : public Account
{
	private:
	double	Balance;
	string	Name;

	public:
	// Constructors
	SavingsAccount();
	SavingsAccount(double BalanceToSet);
	SavingsAccount(string NameToSet);
	SavingsAccount(double BalanceToSet, string NameToSet);

	// Getters
	double	GetBalance();
	string	GetName();

	// Setters
	void	SetName(string Name);
	bool	Deposit(double DepositAmount);
	bool	Withdraw(double WithdrawAmount);
};

#endif