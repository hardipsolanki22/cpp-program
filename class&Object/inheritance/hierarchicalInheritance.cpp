#include<iostream>
using namespace std;

class  A {
    public:
    void showA() {
        cout<< "class A" << endl;
    }
};

class B : public A {
    public:
    void showB() {
        cout<< "class B" << endl;
    }
};
class C : public A {
    public:
    void showC() {
        cout<< "class C" << endl;
    }
};

int main() {
    B b;
    cout<< "Calling from B: " << endl;
    b.showB();
    b.showA();

    C c;
    cout<< "Calling from C: " << endl;
    c.showC();
    c.showA();

    return 0;
}