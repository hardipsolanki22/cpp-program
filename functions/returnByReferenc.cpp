// C++ Program to illustrate return by reference

#include<iostream>
using namespace std;

// function to return address
int& returnValue(int& x) {
    cout<< "The Value of X: "<<x<<endl;
    cout<< "The Address of X: "<<&x<<endl; 
    return x;
}

int main() {
    int a = 10;
    int& b = returnValue(a);

    cout << "The Value of A: "<< a << endl;
    cout << "The Address of A: "<< &a << endl;

    cout << "The Value of B: "<< b << endl;
    cout << "The Address of B: "<< &b << endl; 

    // returnValue(a) = 20;
    b=20;
      
    cout << "The Value of A: " << a << endl;
    cout << "The Address of A: " << &a; 





}