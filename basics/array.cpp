#include<iostream>
#include<vector>

using namespace std;

int main(){
    // string cars[5] = {"Volvo","BWM","Ford","Mazda","Tesla"};
    // cars[0] = "Opel";
    // cout << cars[0];

    // for(int i = 0;i<5;i++){
        // cout << cars[i] << "\n";
    // }


    // Vectro dynamic array

    // vector<string> cars = {"Volvo","BMW","Ford"};
    // cars.push_back("tesla");

    // for(string car : cars){
    //     cout << car << "\n";
    // }
    // return 0;



    // Array aize

    // int myNumbers[5] = {10,20,30,40,50};
    // cout << sizeof(myNumbers);



    // Example

    // int ages[8] = {22,34,18,45,07,333,56,17};
    // float avg,sum = 0;
    // int i;
    // int length = sizeof(ages) / sizeof(ages[0]);

    // for(int age : ages){
    //     sum += age;
    // }
    // avg = sum/length;
    
    // cout << "The average is: " << avg << "\n";



    // Multidimensional Array

    string letters[2][4] = {
        {"A","B","C","D"},
        {"E","F","G","H"},
    };

    cout << letters[0][2];
}
