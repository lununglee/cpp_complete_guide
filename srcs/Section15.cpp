#include "../Includes/Header.h"

void	ClassInheritance()
{
	AccountInherit			MyAccount;
	SavingsAccountInherit	MySavingsAccount;

	MyAccount.Deposit(200.0);
	MyAccount.Withdraw(100.0);

	MySavingsAccount.Deposit(400.0);
	MySavingsAccount.Withdraw(300.0);
}
