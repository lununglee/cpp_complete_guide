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

void	ClassProtected()
{
	// Base BaseClass {};
	// BaseClass.A = 100;
	// // Base.B = 200; //			Compiler Error
	// // Base.C = 300; //			Compiler Error
	// Derived DerivedClass {};
	// DerivedClass.A = 100;
	// // DerivedClass.B = 200; //	Compiler Error
	// // DerivedClass.C = 300; //	Compiler Error

	// Base	BaseClass1 {100};
	// Base	BaseClass2 {BaseClass1};
	// BaseClass1 = BaseClass2;
	// Derived	DerivedClass {1000};
	Derived	D1 {100};
	Derived	D2 {D1};
	D1 = D2;
}

void	ClassRedefine()
{
	// AccountInherit			MyAccount {100.0};
	// SavingsAccountInherit	MySavingsAccount {100.0, 25.0};

	// cout << MyAccount << endl;
	// MyAccount.Deposit(50.0);
	// cout << MyAccount << endl;

	// cout << MySavingsAccount << endl;
	// MySavingsAccount.Deposit(50.0);
	// cout << MySavingsAccount << endl;
}

void	InheritanceChallenge()
{
	cout.precision(2);
	cout << fixed;

	vector<AccountInherit> Accounts;
	Accounts.push_back(AccountInherit {});
	Accounts.push_back(AccountInherit {"Larry"});
	Accounts.push_back(AccountInherit {"Moe", 2000});
	Accounts.push_back(AccountInherit {"Curly", 5000});
	Display(Accounts),
	Deposit(Accounts, 1000);
	Withdraw(Accounts, 2000);

	vector<SavingsAccountInherit> SavingsAccounts;
	SavingsAccounts.push_back(SavingsAccountInherit {});
	SavingsAccounts.push_back(SavingsAccountInherit {"Superman"});
	SavingsAccounts.push_back(SavingsAccountInherit {"Batman", 2000});
	SavingsAccounts.push_back(SavingsAccountInherit {"Wonderwoman", 5000, 5.0});
	Display(SavingsAccounts),
	Deposit(SavingsAccounts, 1000);
	Withdraw(SavingsAccounts, 2000);
}
