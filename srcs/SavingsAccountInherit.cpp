#include "../Includes/SavingsAccountInherit.h"

#include <iostream>

/*********************************
*            Ostream             *
*********************************/

ostream		&operator<<(ostream &OS, const SavingsAccountInherit &Source)
{
	OS << "[SavingsAccount: " << Source.Name << " -> " << Source.Balance << "with: " << Source.InterestRate << "% interest" << "]" << endl;
	return OS;
}

/*********************************
*          Constructors          *
*********************************/

SavingsAccountInherit::SavingsAccountInherit(string NameToSet, double BalanceToSet, double InterestRateToSet)
: AccountInherit {NameToSet, BalanceToSet}, InterestRate {InterestRateToSet}
{ }

/*********************************
*          Destructors           *
*********************************/

SavingsAccountInherit::~SavingsAccountInherit()
{ }

/*********************************
*            Setters             *
*********************************/

bool	SavingsAccountInherit::Deposit(double DepositAmount)
{
	// std::cout << "Savings Account Deposit: " << DepositAmount << std::endl;
	DepositAmount += (DepositAmount * (InterestRate / 100));
	return AccountInherit::Deposit(DepositAmount);
}
