// Section 13
// Implementing member methods 2

#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    
    Account angela_account;
    angela_account.set_name("Angela's account");
    angela_account.set_balance(1000.0);
    
    // deposit $200
    if (angela_account.deposit(200.0)){
        cout << "Deposit OK" << endl;
        
    } else {
        cout << "Deposit NOT allowed" << endl;
    }
    
    // withdrawl $500
    if (angela_account.withdraw(500.0)){
        cout << "Withdrawal OK" << endl;
    
    } else {
        cout << "Not sufficient funds" << endl;
    }
    
    // withdrawl $1500
    if (angela_account.withdraw(1500.0)){
        cout << "Withdrawal OK" << endl;
    
    } else {
        cout << "Not sufficient funds" << endl;
    }
    
    
    
    return 0;
}