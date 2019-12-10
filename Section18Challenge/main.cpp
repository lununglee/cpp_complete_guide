#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "InsufficientBalanceException.h"

using namespace std;

int main() {
    // test your code here
    try
    {
        unique_ptr<Account> P1 = make_unique<Checking_Account>("Larry", -120);
    }
    catch(const IllegalBalanceException &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        unique_ptr<Account> P2 = make_unique<Savings_Account>("Moe", 1200);
        P2->withdraw(2000);
    }
    catch(const InsufficientFundsException &e)
    {
        std::cerr << "Insufficient Funds Exception" << '\n';
    }

    std::cout << "Program completed successfully" << std::endl;
    return 0;
}
