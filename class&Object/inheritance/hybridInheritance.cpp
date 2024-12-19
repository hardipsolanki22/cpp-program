#include<iostream>
using namespace std;

class A {
    protected:
    int a;

    public:
    void setA() {
        cout<< "Enter value of A: " << endl;
        cin>> a;
    }
};

class B:public A {
    protected:
    int b;

    public:
    void setB() {
        cout<< "Enter value of B: " << endl;
        cin>> b;
    } 
};

class C {
    protected:
    int c;

    public:
    void setC() {
        cout<< "Enter value of C: " << endl;
        cin>> c;
    }
};

class D:public B, public C{
    public: 
    void mul() {
        setA();
        setB();
        setC();
        cout<< "Multiplication of A, B and C is: " << a*b*c << endl;
    }
};


int main() {
    D d;
    d.mul();


    return 0;
}