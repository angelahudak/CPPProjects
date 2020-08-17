// Section 8
// Assignment Operator

#include <iostream>

using namespace std;

int main() {
    
    // const int num1 {10}; //This is a read-only variable - cannot be changed
    int num1 {10}; // initialization not assignment
    int num2 {20};
    
    num1 = 100; // Change the 10 to 100
    // num1 = num2; // Change the 10 to the value of num2 which is 20
    // num1 = num2 = 1000; // Change the value of both num1 and num2 to 1000
    // num1 = "Angela"; // Won't work with string because num1 was declared as an integer
    // 100 = num1; // 100 is iliteral - no L value - it doesn't have a location in memory
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    cout << endl;
    return 0;
}
