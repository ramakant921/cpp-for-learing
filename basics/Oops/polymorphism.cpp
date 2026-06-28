// Polymorphism means many forms and it occur when we have many classes that are related to each other by  inheritance.

#include<iostream>
#include<string>

using namespace std;

// class Animal{
//     public:
//     void animalSound(){
//         cout << "The animal makes a sound \n";
//     }
// };

// class Pig : public Animal{
//     public:
//     void animalSound(){
//         cout << "The pig says: wee wee\n";
//     }
// };

// class Dog: public Animal{
//     public:
//     void animalSound(){
//         cout << "The dog says: bow wow\n";
//     }
// };

// int main(){
//     Animal myAnimal;
//     Pig myPig;
//     Dog myDog;

//     myAnimal.animalSound();
//     myPig.animalSound();
//     myDog.animalSound();
//     return 0;
// }




// Virtual Function

class Animal{
    public:
    virtual void sound(){
        cout << "Animal sound\n";
    }
};

class Dog : public Animal{
    public:
    void sound() override{
        cout << "Dog barks\n";
    }
};

int main(){
    Animal* a;
    Dog d;
    a = &d;
    a -> sound(); // -> Operator in C++ is used to access member through a pointer it is a shortcut for writing (*pointer).member
    return 0;
}