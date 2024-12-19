#include<iostream>
using namespace std;

class Complex {
    int a;

    public:
    void setData(int x) {
        a = x;
    }
    void showData() {
        cout<< "Value of A: " << a << endl;
    }

  //  friend Complex operator ++(Complex);
  friend Complex operator -(Complex);
};

// Complex operator ++(Complex c) {
//     Complex temp;
//     temp.a = ++ c.a;

//     return (temp);
// }

Complex operator -(Complex c) {
    Complex temp;
    temp.a = - c.a;

    return temp;
}


int main() {
    Complex c1, c2;
    c1.setData(3);

    //c2 = operator ++(c1);
   // c2 = ++ c1;

   //c2 = operator -(c1);
   c2 = - c1;


    c1.showData();
    c2.showData();
        
    return 0;
}