#include<iostream>
using namespace std;

int main(){
    string firstName = "john";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;
}