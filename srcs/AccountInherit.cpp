#include "../Includes/AccountInherit.h"

#include <iostream>

AccountInherit::AccountInherit()
{ }
AccountInherit::~AccountInherit()
{ }
void	AccountInherit::Deposit(double DepositAmount)
{
	std::cout << "Account Deposit: " << DepositAmount << std::endl;
}
void	AccountInherit::Withdraw(double WithdrawAmount)
{
	std::cout << "Account Withdraw: "<< WithdrawAmount << std::endl;
}
