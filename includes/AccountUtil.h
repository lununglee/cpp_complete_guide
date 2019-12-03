#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include <iostream>

#include "AccountInherit.h"
#include "SavingsAccountInherit.h"

using std::vector;
using std::cout;
using std::endl;

void	Display(const vector<AccountInherit> &Accounts);
void	Deposit(vector<AccountInherit> &Accounts, double DepositAmount);
void	Withdraw(vector<AccountInherit> &Accounts, double WithdrawAmount);
void	Display(const vector<SavingsAccountInherit> &Accounts);
void	Deposit(vector<SavingsAccountInherit> &Accounts, double DepositAmount);
void	Withdraw(vector<SavingsAccountInherit> &Accounts, double WithdrawAmount);

#endif
