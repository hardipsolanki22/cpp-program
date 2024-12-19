// Inline function in c++

#include<iostream>
using namespace std;

inline int cub(int s) {
    return s*s*s;
}
int main() {
    cout << "The cube of 3 is: "<<cub(3);
    return 0;
}