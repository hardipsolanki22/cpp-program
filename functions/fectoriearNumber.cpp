#include<iostream>
using namespace std;

int main() {
    int no, factorial = 0;
    cout<< "Enter Number: ";
    cin>> no;

    for(int i = 1; i <= no ; i++) {
        factorial = i * no;
       cout << factorial << " ";
    }


    return 0;
}