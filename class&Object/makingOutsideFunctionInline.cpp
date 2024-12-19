#include<iostream>
using namespace std;

class inlineDemo {
    int a;

    public:
    void getData(int a);
    void showData();

};

    inline void inlineDemo::getData(int a) {
        this -> a = a;
    }

    inline void inlineDemo::showData() {
        cout << "Value of A: " << a;
    }

int main() {
    inlineDemo obj;
    obj.getData(1);
    obj.showData();
    return 0;
}