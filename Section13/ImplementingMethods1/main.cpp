// Section 13
// Implementing member methods 1

#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    // attributes 
    string name;
    double balance;
    
public:
    // methods
    // declared inline
    void set_balance(double bal) {
        balance = bal;
        
    }
    double get_balance(){
        return balance;
    }
    
    // methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n){
    name = n;
}

string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    // if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount){
    if(balance-amount >= 0){
        balance -= amount;
        return true;
    
    } else {
        return false;
    }
}

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