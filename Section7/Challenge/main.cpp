//Section 7
//Section Challenge

#include <iostream>
#include <vector>

using namespace std;
int main() {
    
    // Declare 2 empty vectors of integers named
    // vector1 and vector2
    vector <int> vector1;
    vector <int> vector2;
    
    // Add 10 and 20 to vector1 dynamically using push_back
    vector1.push_back(10);
    vector1.push_back(20);

    // Display the elements in vector1 using the at() method 
    // as well as its size using the size() method
    cout << "Contents of vector1: " << vector1.at(0) << ", " << vector1.at(1) << endl;
    cout << "Size of vector1: " << vector1.size() << endl;
    
    // Add 100 and 200 to vector2 dynamically using push_back
    vector2.push_back(100);
    vector2.push_back(200);

    // Display the elements in vector2 using the at() method 
    // as well as its size using the size() method
    cout << "\nContents of vector2: " << vector2.at(0) << ", " << vector2.at(1) << endl;
    cout << "Size of vector2: " <<  vector2.size() << endl;
    
    // Declare an empty 2D vector called vector_2d
    // Remember, that a 2D vector is a vector of vector <int>
    vector <vector<int>> vector_2d;
    
    // Add vector1 to vector_2d dynamically using push_back
    vector_2d.push_back(vector1);
    
    // Add vector2 to vector_2d dynamically using push_back
    vector_2d.push_back(vector2);
    
    // Display the elements in vector_2d using the at() method
    cout << "\nContents of vector_2d: " << endl; 
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    // Change vector1.at(0) to 1000
    vector1.at(0) = 1000;
    
    // Display the elements in vector_2d again using the at() method
    cout << "\nContents of vector_2d: " << endl; 
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    // Display the elements in vector1 using the at() method 
    cout << "\nContents of vector1: " << vector1.at(0) << ", " << vector1.at(1) << endl;
    cout << "Size of vector1: " << vector1.size() << endl;
    
    // I expect that the elements of vector_2d to have the original numbers of vector1
    // because we changed the elements of vector1 without changing or pushing them to vector_2d
    // whereas displaying vector1 after changing the first index will show the new number
    
    return 0;
}