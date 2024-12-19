#include<iostream>
using namespace std;

class Wall {
    double length;
    double height;

    public:

    // Parameterized Constructor

    Wall(double length, double height) {
        this -> length = length;
        this -> height = height;
    }

    double calculateArea() {
        return length * height;
    }

};

int main() {
    Wall wall1(10.5, 10.5);

    cout << "Area of Wall : " << wall1.calculateArea() << endl;

    return 0;
}