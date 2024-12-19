#include<iostream>
using namespace std;

int main() {
   char Operator;
   int n1, n2;

    cout<< "Enter operator (+, -, *, /): ";
    cin>> Operator;

    cout<< "Enter two operands: ";
    cin>> n1 >> n2;

    switch(Operator) {
        case '+':
        cout<< n1 << " + " << n2 << " = " << n1+n2;
        break;

        case '-':
          cout<< n1 << " - " << n2 << " = " << n1-n2;
        break;

        case '*':
         cout<< n1 << " * " << n2 << " = " << n1*n2;
        break;

        case '/':
          cout<< n1 << " / " << n2 << " = " << n1/n2;
        break;

        default: 
        cout<< "Enter valid operator (+, -, *, /)";
    }
    return 0;
}