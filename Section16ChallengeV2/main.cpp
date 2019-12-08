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

// void	func(shared_ptr<Account> P)
// {
// 	cout << "Use Count: " << P.use_count() << endl;
// }

class Test
{
	private:
	int	data;
	public:
	Test() : data {0} { cout << "Test Constructor: " << data << endl; }
	Test(int data) : data {data} { cout << "Test Constructor: " << data << endl; }
	int	getData() const { return data; }
	~Test() { cout << "Test destructor: " << data << endl; }
};

unique_ptr<vector<shared_ptr<Test>>> make()
{
	return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec, int num)
{
	int temp;

	for (size_t Counter {0}; Counter < num; Counter++)
	{
		cout << "Enter data points [" << Counter << "]";
		cin >> temp;
		// shared_ptr<Temp> ptr = make_shared<Test>(temp);
		// vec.push_back(ptr);
		vec.push_back(make_shared<Test>(temp));
	}
}

void display(const vector<shared_ptr<Test>> &vec)
{
	for (const auto &v : vec)
		cout << v->getData() << endl;
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

	// shared_ptr<Account> A1 = make_shared<Checking_Account>("Larry", 1000);
	// shared_ptr<Account> A2 = make_shared<Savings_Account>("Moe", 2000, 4.5);
	// shared_ptr<Account> A3 = make_shared<Trust_Account>("Curly", 3000, 5.2);

	// vector<shared_ptr<Account>> Accounts;

	// Accounts.push_back(A1);
	// Accounts.push_back(A2);
	// Accounts.push_back(A3);

	// for (const auto &Acc : Accounts)
	// {
	// 	cout << *Acc << endl;
	// 	cout << Acc.use_count() << endl;
	// }

/****************************************
*             WEAK POINTER              *
****************************************/

	// If you have 2 classes that has "SHARED_PTR" towards each other, the memory will never be released since they keep each other alive
		// Destructors will never be called
	// in this case, use "WEAK_PTR" in one of the classes instead
		// Destructors will be called

/****************************************
*            CUSTOM DELETER             *
****************************************/

	// Use function of lamba deleter
	// When isntantiating a smart_ptr, use "new"

	// shared_ptr<Account> A1 {new Checking_Account {"Joe", 100}, my_deleter}
	// shared_ptr<Account> A1 {new Checking_Account {"Joe", 100},
	// 	[] (Account *PTR)
	// 	{
	// 		cout << "MY DELETER" << endl;
	// 		delete PTR;
	// 	}};

	unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
	vec_ptr = make();
	cout << "How many data points do you want to enter: ";
	int num;
	cin >> num;
	fill(*vec_ptr, num);
	display(*vec_ptr);

	return 0;
}
