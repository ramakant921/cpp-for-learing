// fstream - there are three classes included in the fstream library which are used to create write or read file.
// ofstream for create and write ifstream for reads and fstream for both.


#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream MyFile("filename.txt");

    MyFile << "Files can be tricky, but it is fun enough!";

    MyFile.close();
}