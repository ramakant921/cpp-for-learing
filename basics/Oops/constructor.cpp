// constructor - is a special method that is automatically called when an object of a class is created.

#include<iostream>
#include<string>

using namespace std;

// class MyClass{
//     public:
//         MyClass(){
//             cout << "Hello world";
//         }
// };

// int main(){
//     MyClass myObj;
//     return 0;
// }

// class Car{
//     public:
//         string brand;
//         string model;
//         int year;
//         Car(string x, string y, int z){
//             brand = x;
//             model = y;
//             year = z;
//         }
// };

// int main(){
//     Car carObj1("BMW","x5",1999);
//     Car carObj2("Ford","Mustang",1969);

//     cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//     cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
// }




// Constructor Overload - having more than one constructor in the same class is called constructor overloading

class Car{
    public:
    string brand;
    string model;

    Car(){
        brand = "Unknown";
        model = "Unknown";
    }
    Car(string b, string m){
        brand = b;
        model = m;
    }
};

int main(){
    Car car1;
    Car car2("BMW","X5");
    Car car3("Ford","Mustang");

    cout << "Cars1: " << car1.brand << " " << car1.model << "\n";
    cout << "Cars2: " << car2.brand << " " << car2.model << "\n";
    cout << "Cars3: " << car3.brand << " " << car3.model;
    return 0;
}