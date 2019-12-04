#include "../Includes/AccountUtil.h"

void	Display(const vector<AccountInherit> &Accounts)
{
	cout << "\n=========== Display - Account ===========" << endl << endl;
	for (const auto &Account : Accounts)
		cout << Account << endl;
}

void	Deposit(vector<AccountInherit> &Accounts, double DepositAmount)
{
	cout << "\n=========== Deposit - Account ===========" << endl << endl;
	for (auto &Account : Accounts)
	{
		if (Account.Deposit(DepositAmount))
			cout << "Deposited " << DepositAmount << " to " << Account << endl;
		else
			cout << "Failed to deposit " << DepositAmount << " to " << Account << endl;
	}
}

void	Withdraw(vector<AccountInherit> &Accounts, double WithdrawAmount)
{
	cout << "\n=========== Withdraw - Account ===========" << endl << endl;
	for (auto &Account : Accounts)
	{
		if (Account.Withdraw(WithdrawAmount))
			cout << "Withdraw " << WithdrawAmount << " to " << Account << endl;
		else
			cout << "Failed to Withdraw  " << WithdrawAmount << " to " << Account << endl;
	}
}

void	Display(const vector<SavingsAccountInherit> &SavingsAccounts)
{
	cout << "\n=========== Display - SavingsAccount ===========" << endl << endl;
	for (const auto &SavingsAccount : SavingsAccounts)
		cout << SavingsAccount << endl;
}

void	Deposit(vector<SavingsAccountInherit> &SavingsAccounts, double DepositAmount)
{
	cout << "\n=========== Deposit - SavingsAccount ===========" << endl << endl;
	for (auto &SavingsAccount : SavingsAccounts)
	{
		if (SavingsAccount.Deposit(DepositAmount))
			cout << "Deposited " << DepositAmount << " to " << SavingsAccount << endl;
		else
			cout << "Failed to deposit " << DepositAmount << " to " << SavingsAccount << endl;
	}
}

void	Withdraw(vector<SavingsAccountInherit> &SavingsAccounts, double WithdrawAmount)
{
	cout << "\n=========== Withdraw - SavingsAccount ===========" << endl << endl;
	for (auto &SavingsAccount : SavingsAccounts)
	{
		if (SavingsAccount.Withdraw(WithdrawAmount))
			cout << "Withdraw " << WithdrawAmount << " to " << SavingsAccount << endl;
		else
			cout << "Failed to Withdraw " << WithdrawAmount << " to " << SavingsAccount << endl;
	}
}

void	Display(const vector<CheckingAccount> &CheckingAccounts)
{
	cout << "\n=========== Display - Checking Account ===========" << endl << endl;
	for (const auto &CheckingAccount : CheckingAccounts)
		cout << CheckingAccount << endl;
}

void	Deposit(vector<CheckingAccount> &CheckingAccounts, double DepositAmount)
{
	cout << "\n=========== Deposit - Checking Account ===========" << endl << endl;
	for (auto &CheckingAccount : CheckingAccounts)
	{
		if (CheckingAccount.Deposit(DepositAmount))
			cout << "Deposited " << DepositAmount << " to " << CheckingAccount << endl;
		else
			cout << "Failed to deposit " << DepositAmount << " to " << CheckingAccount << endl;
	}
}

void	Withdraw(vector<CheckingAccount> &CheckingAccounts, double WithdrawAmount)
{
	cout << "\n=========== Withdraw - Checking Account ===========" << endl << endl;
	for (auto &CheckingAccount : CheckingAccounts)
	{
		if (CheckingAccount.Withdraw(WithdrawAmount))
			cout << "Withdraw " << WithdrawAmount << " to " << CheckingAccount << endl;
		else
			cout << "Failed to Withdraw " << WithdrawAmount << " to " << CheckingAccount << endl;
	}
}

void	Display(const vector<TrustAccount> &TrustAccounts)
{
	cout << "\n=========== Display - Trust Account ===========" << endl << endl;
	for (const auto &TrustAccount : TrustAccounts)
		cout << TrustAccount << endl;
}

void	Deposit(vector<TrustAccount> &TrustAccounts, double DepositAmount)
{
	cout << "\n=========== Deposit - Trust Account ===========" << endl << endl;
	for (auto &TrustAccount : TrustAccounts)
	{
		if (TrustAccount.Deposit(DepositAmount))
			cout << "Deposited " << DepositAmount << " to " << TrustAccount << endl;
		else
			cout << "Failed to deposit " << DepositAmount << " to " << TrustAccount << endl;
	}
}

void	Withdraw(vector<TrustAccount> &TrustAccounts, double WithdrawAmount)
{
	cout << "\n=========== Withdraw - Trust Account ===========" << endl << endl;
	for (auto &TrustAccount : TrustAccounts)
	{
		if (TrustAccount.Withdraw(WithdrawAmount))
			cout << "Withdraw " << WithdrawAmount << " to " << TrustAccount << endl;
		else
			cout << "Failed to Withdraw " << WithdrawAmount << " to " << TrustAccount << endl;
	}
}
