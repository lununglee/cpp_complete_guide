#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include <iostream>

#include "AccountInherit.h"
#include "SavingsAccountInherit.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

using std::vector;
using std::cout;
using std::endl;

void	Display(const vector<AccountInherit> &Accounts);
void	Deposit(vector<AccountInherit> &Accounts, double DepositAmount);
void	Withdraw(vector<AccountInherit> &Accounts, double WithdrawAmount);
void	Display(const vector<SavingsAccountInherit> &Accounts);
void	Deposit(vector<SavingsAccountInherit> &Accounts, double DepositAmount);
void	Withdraw(vector<SavingsAccountInherit> &Accounts, double WithdrawAmount);
void	Display(const vector<CheckingAccount> &Accounts);
void	Deposit(vector<CheckingAccount> &Accounts, double DepositAmount);
void	Withdraw(vector<CheckingAccount> &Accounts, double WithdrawAmount);
void	Display(const vector<TrustAccount> &Accounts);
void	Deposit(vector<TrustAccount> &Accounts, double DepositAmount);
void	Withdraw(vector<TrustAccount> &Accounts, double WithdrawAmount);

#endif
