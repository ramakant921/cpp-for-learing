#include <iostream>
#include <string>

using namespace std;
class Car{
    // public:
    // int myNum;
    // string myString;



    // Example

    public:
    string brand;
    string model;
    int year;
};

int main(){
    // MyClass myObj;

    // myObj.myNum = 15;
    // myObj.myString = "Some string";

    // cout<< myObj.myNum << "\n";
    // cout<< myObj.myString;
    // return 0;



    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    return 0;
}