#include<iostream>
using namespace std;

class squareNumber {
    int number;

    public:
    long square();

    void getNumber(int numbe);

    void showNumber();
};

    long squareNumber::square() {
        return (number*number);
    }

    void squareNumber::getNumber(int number) {
        this->number = number;
    }

    void squareNumber::showNumber() {
        cout << "Square of The Number: " << square();
    }

int main() {
    squareNumber n1;
    n1.getNumber(12);
    n1.showNumber();


    return 0;
}