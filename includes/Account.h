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
	Account(double BalanceToSet, string NameToSet);
	Account();
	Account(double BalanceToSet);
	Account(string NameToSet);

	// Getters
	double	GetBalance();
	string	GetName();

	// Setters
	void	SetBalance(double Balance);
	void	SetName(string Name);

	bool	Deposit(double DepositAmount);
	bool	Withdraw(double WithdrawAmount);
};

#endif
