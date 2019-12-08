// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

void	func(shared_ptr<Account> P)
{
	cout << "Use Count: " << P.use_count() << endl;
}

int main() {

	/****************************************
	*        Polymorphism Challenge         *
	****************************************/
	// Checking_Account C;
	// cout << C << endl;

	// Savings_Account S {"Frank", 5000, 2.6};
	// cout << S << endl;
	// S.deposit(1000);
	// cout << S << endl;
	// S.withdraw(1000);
	// cout << S << endl;

	// Account *PTR = new Trust_Account {"Leo", 10000, 2.6};
	// cout << *PTR << endl;

	// Account *p1 = new Trust_Account {"Larry", 10000};
	// Account *p2 = new Savings_Account {"Moe", 1000};
	// Account *p3 = new Checking_Account {"Curly"};

	// vector<Account *> Arr {p1, p2, p3};

	// display(Arr);
	// deposit(Arr, 1000);
	// withdraw(Arr, 1000);

	/****************************************
	*            UNIQUE POINTER             *
	****************************************/
	// unique_ptr<Account> MyCheckingAccount = make_unique<Checking_Account>("Leo", 5000);
	// cout << *MyCheckingAccount << endl;
	// MyCheckingAccount->deposit(1000);
	// cout << *MyCheckingAccount << endl;

	// vector<unique_ptr<Account>> Accounts;
	// Accounts.push_back(make_unique<Checking_Account>("James", 1000));
	// Accounts.push_back(make_unique<Savings_Account>("James", 1000, 4.5));
	// Accounts.push_back(make_unique<Trust_Account>("James", 1000, 5.2));

	// for (const auto &Acc : Accounts)
	// 	cout << *Acc << endl;

	/****************************************
	*            SHARED POINTER             *
	****************************************/

	// shared_ptr<int> P1 {new int {1000}};
	// cout << "Use Count " << P1.use_count() << endl;

	// shared_ptr<int> P2 {P1};
	// cout << "Use Count " << P1.use_count() << endl;

	// P1.reset();
	// cout << "Use Count " << P1.use_count() << endl;
	// cout << "Use Count " << P2.use_count() << endl;

	// shared_ptr<Checking_Account> Test = make_shared<Checking_Account>("Test", 150);
	// func(Test);
	// cout << "Use Count: " << Test.use_count() << endl;
	// {
	// 	shared_ptr Test1 = Test;
	// 	cout << "Use Count: " << Test.use_count() << endl;
	// 	{
	// 		shared_ptr Test2 = Test;
	// 		cout << "Use Count: " << Test.use_count() << endl;
	// 		Test.reset();
	// 	}
	// 	cout << "Use Count: " << Test.use_count() << endl;
	// }
	// cout << "Use Count: " << Test.use_count() << endl;

	shared_ptr<Account> A1 = make_shared<Checking_Account>("Larry", 1000);
	shared_ptr<Account> A2 = make_shared<Savings_Account>("Moe", 2000, 4.5);
	shared_ptr<Account> A3 = make_shared<Trust_Account>("Curly", 3000, 5.2);

	vector<shared_ptr<Account>> Accounts;

	Accounts.push_back(A1);
	Accounts.push_back(A2);
	Accounts.push_back(A3);

	for (const auto &Acc : Accounts)
	{
		cout << *Acc << endl;
		cout << Acc.use_count() << endl;
	}

	return 0;
}
