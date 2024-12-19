#include<iostream>
using namespace std;

int main() {
    int no;

    cout<< "Enter Number: ";
    cin>> no;

    if(no % 2 == 0) {
        cout << no << " Number is Even" << endl;
    } else {
         cout << no << " Number is Odd" << endl;
    }

    
    return 0;
}