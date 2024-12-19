#include<iostream>
using namespace std;

// defining default aeguments

void display(char = '*', int = 3);

int main() {
    int count = 5;
    cout << "\n No Argument Pass" << endl;
   display();

    cout<< "\n First Argument Pass"<<endl;
    display('#');

    cout << "\n Both Argument Pass" << endl;
    display('$', count);

    return 0;
}

void display(char c, int count) {
    for(int i = 1; i <= count; i++) {
        cout << c;
    }
}