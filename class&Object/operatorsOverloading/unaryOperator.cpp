// Unary ++ Operator Overloading

#include<iostream>
using namespace std;

class Integer {
    int a;

    public:
    void setData(int x) {
        a = x;
    }
    void showData() {
        cout<< "Value of A: " << a << endl;
    }

    // Similarly decrement (--Pre && Post--) opeartor overloading work
    Integer operator ++() {
        Integer temp;
        temp.a = ++a;

        return (temp);
    }

    // Postfix Increment Operator
    Integer operator ++(int) {
        Integer temp;
        temp.a = a++;

        return(temp);
    }
};

int main() {
    Integer i1, i2;
    i1.setData(4);
   // i2 = i1.operator ++();
    //i2 = ++i1;

    //i2 = i1.operator ++(0);
    i2 = i1++;
    i2.showData();    
    i1.showData();
    return 0;
}