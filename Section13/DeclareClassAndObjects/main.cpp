// Section 13
// Declare CLasses and Objects

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    
    // attributes (data)
    string name {"Player"};
    int health{100};
    int xp{3};
    
    // methods (operations or functions)
    void talk(string);
    bool is_dead();
    
};

class Account {
    // attributes
    string name {"Account"};
    double balance{0.0};
    
    // methods
    bool deposit(double);
    bool withdraw(double);
    
};

int main() {
    Account angela_account;
    Account jim_account;
    
    Player angela;
    Player hero;
    
    Player players[] {angela, hero};
    
    // collectoin of player objects 
    vector<Player> player_vec{angela};
    player_vec.push_back(hero);
    
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    
    return 0;
}