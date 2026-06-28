// Vector - in C++ is like a resizable array both vector and array are data structure used to store multiple element of the same datatype.
// The differece between an array and a vector is that the size of an array cannot be modified however vector can grow or strink in size as needed


#include<vector>
#include<iostream>
using namespace std;


int main(){
    vector<string> cars = {"Volvo","BMW","Ford","Mazda"};
    cars.push_back("Tesla");
    for(string car : cars){
        cout << car << "\n";
    }
    cout << cars.front() << "\n";
    cout << cars.back() << "\n";
    cout << cars.at(2) << "\n";
    // cout << 
    return 0;
}