#include<iostream>
using namespace std;

class A {
    protected:
    int a;

    public:
    void setA(int x) {
        a = x;
    }
};
class B {
    protected:
    int b;

    public:
    void setB(int x) {
        b = x;
    }
};

class C:public A, public B {
    public:
    void showData() {
        cout<< "Value of A: " << a << endl;
        cout<< "Value of B: " << b << endl;
    }
};

int main() {
    C c1;
    c1.setA(2);
    c1.setB(4);
    c1.showData();

    return 0;
}