#include<iostream>
using namespace std;

int main() {
    int no;

    cout<< "Enter Number: ";
    cin>> no;

   if(no > 0) {
     if(no > 100) {
        cout << no << " Number is greater than 100" << endl;

    } else {
        cout << no << " Number is less than 100" << endl;
    }
   } else {
     cout<< "Number must be greater than 0";
   }
    
    return 0;
}