// Access specifier - control how the member of class can be accessed they help protected data and orgranize code so that only the right part can be seen or changed

// In exmaple belw the members are private and public which means that they can be seen or changed

// HENCE it will show error

#include<iostream>
#include<string>

using namespace std;

class MyClass{
    public:
    int x;
    private:
    int y;
};

int main(){
    MyClass myObj;
    myObj.x = 25;
    myObj.y = 50;
    return 0;
}