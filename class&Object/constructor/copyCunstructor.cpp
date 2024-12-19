#include<iostream>
using namespace std;

class Integer {
    int a;

    public:
    void showData() {
        cout<< "Value of A: " << a << endl;
    }
   
     Integer(int x) {
        a = x;
     }
     Integer(Integer &obj) {
        cout<< "Copy Constructor called \n";
        a = obj.a;
     }
};

int main() {
    Integer i1(3);
    Integer i2(i1);
    i2.showData();

    return 0;
}