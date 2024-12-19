#include<iostream>
using namespace std;

class Complex {
    int a, b;

    public:
    void setData(int x, int y) {
        a = x;
        b = y;
    } 
    friend void add(Complex);
};

void add(Complex c) {
    cout<< "Sum is: " << c.a + c.b << endl;
}

int main() {
    Complex c1 ;
    c1.setData(2, 4);
    add(c1);

    return 0;
}