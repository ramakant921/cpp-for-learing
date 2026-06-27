// Encapsulation - is to make sure that sensitive data is hidden from users.


#include<iostream>
using namespace std;

class Employee{
    private:
    int salary;

    public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};

int main(){
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;
}