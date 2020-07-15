#include <iostream>

int main() {
    int favorite_number;
    
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing!! Tha's my favorite number too!" << std::endl; // \n within the string would work to end the line as well
    std::cout << "No really!! " << favorite_number << " is my favorite number!" << std::endl;
    
    return 0;
}