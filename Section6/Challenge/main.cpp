// Section 6
// Section Challenge

#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello, welcome to Angela's Carpet CLeaning Service" << endl;
    cout << endl;
    
    int small_rooms{0};
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_rooms;
    
    int large_rooms{0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;
    
    cout << endl;
    cout << "Estimate for carpet cleaning service" << endl;
    
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    
    const double small_price{25.0};
    cout << "Price per small room: $" << small_price << endl;
    const double large_price{35.0};
    cout << "Price per large room: $" << large_price << endl;
    
    int cost{(small_price*small_rooms)+(large_price*large_rooms)};
    cout << "Cost : $" << cost << endl;
    const double sales_tax{0.06};
    float tax{cost * sales_tax};
    cout << "Tax: $" << tax << endl;
    
    cout << "====================================" << endl;
    
    cout << "Total estimate: $" << cost + tax << endl;
    
    const int estimate_expiry{30};
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    return 0;
}