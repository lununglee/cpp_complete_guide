#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include "Header.h"

class	Account
{
	private:
	double	Balance;
	string	Name;

	public:
	// Constructors
	Account();
	Account(double BalanceToSet);
	Account(string NameToSet);
	Account(double BalanceToSet, string NameToSet);

	// Getters
	double	GetBalance();
	string	GetName();

	// Setters
	void	SetBalance(double BalanceToSet);
	void	SetName(string Name);
	bool	Deposit(double DepositAmount);
	bool	Withdraw(double WithdrawAmount);
};

#endif
