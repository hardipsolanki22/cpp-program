#include<iostream>
using namespace std;

int add(int x, int y) {
    return x+y;
}

double add(double x, double y) {
    return x+y;
}

int main() {

    cout << "Addition (intiger) " << add(10,20) << endl;
    cout << "Addition (Float) " << add(10.2,20.3) << endl;

return 0;
}