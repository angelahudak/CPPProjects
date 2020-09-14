// Section 23
// Access Modifiers
#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    // attributes
    string name {"Player"};
    int health;
    int xp;
    
public:
    // methods 
    void talk(string text_to_say) {
        cout << name << " says " << text_to_say << endl;
    
    }
};

int main() {
    
    Player angela;
    // angela.name = "Angela"; // error bc name is private
    // cout << angela.health << endl; // error bc health is private
    angela.talk("Hello there");
    
    
    return 0;
}