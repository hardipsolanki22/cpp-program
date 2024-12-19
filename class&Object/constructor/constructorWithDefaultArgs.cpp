#include<iostream>
using namespace std;

class Sum {
    int a,b;

    public:

    // Contsroucot with default arguments
     Sum(int a = 10, int b = 20) {
        this -> a = a;
        this -> b = b;
    }
    int addition() {
        return a+b;
    }
};

int main() {
    Sum s1, s2(30, 30);
    cout << "Addition s1: " << s1.addition() << endl;
    cout << "Addition s2: " << s2.addition() << endl;

    return 0;
}