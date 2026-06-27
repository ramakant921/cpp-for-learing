// Inside Example

#include<iostream>
#include<string>

using namespace std;

// class MyClass{
//     public:
//     void myMethod(){
//         cout << "Hello world!";
//     }
// };

// int main(){
//     MyClass myObj;
//     myObj.myMethod();
//     return 0;
// }



// Outside Example

class MyClass{
    public:
        void myMethod();
};

void MyClass::myMethod(){
    cout << "Hello World";
}

int main(){
    MyClass myObj;
    myObj.myMethod();
    return 0;
}