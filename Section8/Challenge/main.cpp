// Section 8
// Challenge

using namespace std;

#include <iostream>

int main() {
    int cents{};
    
    cout << "Enter an amount in cents : ";
    cin >> cents;
    
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};
    int balance{}, num_dollars{}, num_quarters{}, num_dimes{}, num_nickels{}, num_pennies{};
    
    num_dollars = cents / dollar;
    balance = cents - (num_dollars * dollar);
    
    num_quarters = balance / quarter;
    balance -= num_quarters * quarter;
    
    num_dimes = balance / dime;
    balance -= num_dimes * dime;
    
    num_nickels = balance / nickel;
    balance -= num_nickels * nickel;
    
    num_pennies = balance;

                        
    cout << "\nYou can provide change for this change as follows: " << endl;
    cout << "dollars  : " << num_dollars << endl;
    cout << "quarters : " << num_quarters << endl;
    cout << "dimes    : " << num_dimes << endl;
    cout << "nickels  : " << num_nickels << endl;
    cout << "pennies  : " << num_pennies << endl;
    
    cout << endl;
    
    return 0;
}