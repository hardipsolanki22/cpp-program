#include<iostream>
using namespace std;

class Complex {
    int a, b;

    public:
    void setData(int x, int y) {
        a = x; 
        b = y;
    }
    void showData() {
        cout<< "Vlaue of A: " << a << endl;
        cout<< "Vlaue of B: " << b << endl;
    }
};

int main() {
    // Complex n1;
    // Complex *ptr = &n1;
    Complex *ptr = new Complex;

    ptr -> setData(2,5);
    ptr -> showData();

    return 0;
}