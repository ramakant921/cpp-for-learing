// Inheritance allow one class to reuse attribute and methods from another class.
// It helps you write cleaner more efficient code by avoiding duplication.

#include<iostream>
#include<string>

using namespace std;

// class Vehical{
//     public:
//     string brand = "Ford";
//     void honk(){
//         cout << "Tuut, tuut \n";
//     }
// };

// class Car: public Vehical{
//     public:
//     string model = "Mustang";
// };

// int main(){
//     Car myCar;
//     myCar.honk();
//     cout << myCar.brand + " " + myCar.model;
//     return 0;
// }




// multilevel inheritance 

// class MyClass{
//     public:
//     void myFunction(){
//         cout << "Some content in parent class.";
//     }
// };

// class MyChild: public MyClass{
// };

// class MyGrandChild: public MyChild{
// };

// int main(){
//     MyGrandChild myObj;
//     myObj.myFunction();
//     return 0;
// }



// Multiple inheritance

class MyClass{
    public:
    void myFunction(){
        cout << "Some content in parent class.";
    }
};

class MyOtherClass{
    public:
    void myOtherFunction(){
        cout << "Some content in another class.";
    }
};

class MyChildClass: public MyClass, public MyOtherClass{
};

int main(){
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}