#include<iostream>
using namespace std;

int main() {
    int i = 2;

    {
        cout << i << endl;
        i++;
    } while(i < 1);
    return 0;
}