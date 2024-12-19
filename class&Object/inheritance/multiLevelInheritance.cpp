#include<iostream>
using namespace std;

class Animal {
    public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog:public Animal {
    public:
    void bark() {
        cout << "Breaking..." << endl;
    }
};

class Babydog:public Dog {
    public:
    void weep() {
        cout << "Weeping..." << endl;
    }
};

int main() {
    Babydog d1;
    d1.eat();
    d1.bark();
    d1.weep();
    return 0;
}