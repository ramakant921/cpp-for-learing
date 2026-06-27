// Friend function - is not a member of the class but it is allowed to access the class's private data

#include<iostream>
#include<string>

using namespace std;

class Employee{
    private:
    int salary;

    public:
    Employee(int s){
        salary = s;
    }
    friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp){
    cout << "Salary: " << emp.salary;
}

int main(){
    Employee myEmp(50000);
    displaySalary(myEmp);
    return 0;
}