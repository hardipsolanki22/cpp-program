#include<iostream>
using namespace std;

// function prototype
int addNum(int , int);

int main() {
    int a = 19, b = 10;

    // function call
    int result = addNum(a, b);
    cout << a <<" + " << b <<" = " << result;
    
    return 0;
}

// function defination
int addNum(int a, int b) {
    return a+b;
}
