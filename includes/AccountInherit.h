#ifndef _ACCOUNT_INHERI_H_
#define _ACCOUNT_INHERI_H_

#include <string>
#include <iostream>

using std::string;
using std::ostream;
using std::cout;
using std::endl;

class AccountInherit
{
	friend ostream &operator<<(ostream &OS, const AccountInherit &Source);

	private:
	static constexpr const char	*DefaultName {"Unnamed Account"};
	static constexpr double		DefaultBalance {0.0};

	protected:
	string						Name;
	double						Balance;

	public:
	// Constructor
	AccountInherit(string NameToSet = DefaultName, double BalanceTosSet = DefaultBalance);
	// Destructor
	~AccountInherit();
	// Setters
	bool						Deposit(double DepositAmount);
	bool						Withdraw(double WithdrawAmount);
	// Getter
	double						GetBalance() const;
};

#endif
