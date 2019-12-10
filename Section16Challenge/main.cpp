// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {

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

	Account *p1 = new Trust_Account {"Larry", 10000};
	Account *p2 = new Savings_Account {"Moe", 1000};
	Account *p3 = new Checking_Account {"Curly"};

	vector<Account *> Arr {p1, p2, p3};

	display(Arr);
	deposit(Arr, 1000);
	withdraw(Arr, 1000);
	
	return 0;
}

