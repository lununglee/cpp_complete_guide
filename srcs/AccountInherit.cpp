#include "../Includes/AccountInherit.h"

AccountInherit::AccountInherit()
{ }
AccountInherit::~AccountInherit()
{ }
void	AccountInherit::Deposit(double DepositAmount)
{
	cout << "Account Deposit: " << DepositAmount << endl;
}
void	AccountInherit::Withdraw(double WithdrawAmount)
{
	cout << "Account Withdraw: "<< WithdrawAmount << endl;
}
