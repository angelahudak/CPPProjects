// Section 8
/*
 * Increment operator ++
 * Decrement operator --
 * 
 * Increments or decrements its operand by 1
 * Can be used with integers, floating point types and pointers
 * 
 * Prefeix ++num
 * Postfix num++
 * 
 * Dont overuse this operator!
 * ALERT!!! Never use it twice for the same variable in the same statement!!
 * 
 */

#include <iostream>

using namespace std;

int main() {
    
    int counter {10};
    int result {0};
    
    //Example 1
    cout << "Example 1 - simple increment" << endl;
    cout << "Counter: " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter: " << counter << endl;
    
    counter++;
    cout << "Counter: " << counter << endl;
    
    ++counter; 
    cout << "Counter: " << counter << endl;
    
    // Example 2
    cout << "\nExample 2 - preincrement" << endl;
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = ++counter; //Note the pre increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    //Example 3
    cout << "\nExample 3 = post increment" << endl;
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = counter++; //Note the post increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    // Example 4
    cout << "\nExample 4" << endl;
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = ++counter + 10; //Note the pre increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    // Example 5
    cout << "\nExample 5" << endl;
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = counter++ + 10; //Note the post increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    cout << endl;
    
    return 0;
}