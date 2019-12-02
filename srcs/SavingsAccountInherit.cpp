#include "../Includes/SavingsAccountInherit.h"

#include <iostream>

SavingsAccountInherit::SavingsAccountInherit()
{ }
SavingsAccountInherit::~SavingsAccountInherit()
{ }
void	SavingsAccountInherit::Deposit(double DepositAmount)
{
	std::cout << "Savings Account Deposit: " << DepositAmount << std::endl;
}
void	SavingsAccountInherit::Withdraw(double WithdrawAmount)
{
	std::cout << "Savings Account Deposit: " << WithdrawAmount << std::endl;
}
