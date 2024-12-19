#include<iostream>
using namespace std;

class User {
    int age;

    public:
    
    // Constructor with no arguments 
    User() {
        age = 20;
    }

     // Constructor with arguments 
     User(int age) {
        this -> age = age;
     }

     void getAge() {
        cout << "Age is: " << age << endl;
     }

};

int  main() {
    User p1, p2(12);
    p1.getAge();
    p2.getAge();

    return 0;
}