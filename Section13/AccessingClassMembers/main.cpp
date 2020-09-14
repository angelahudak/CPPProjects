// Section 13
// Accessing Class Members

#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    // attributes
    string name;
    int health;
    int xp;
    
    // methods (operations or functions)
    void talk(string text_to_say){
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
    
};

class Account {
public:
    // attributes
    string name;
    double balance;
    
    // methods
    bool deposit(double bal){
        balance += bal;
        cout << "In deposit" << endl;
        
    }
    bool withdraw(double bal){
        balance -= bal;
        cout << "In withdraw" << endl;
        
    }
};


int main() {
    Account angela_account;
    angela_account.name = "Angela's account";
    angela_account.balance = 5000.0;
    
    angela_account.deposit(1000.0);
    angela_account.withdraw(500.0);
    
    
    Player angela;
    angela.name = "Angela";
    angela.health = 100;
    angela.xp = 12;
    angela.talk("Hi there");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you");
    
    cout << endl;
    return 0;
}