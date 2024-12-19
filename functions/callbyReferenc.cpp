#include<iostream>
using namespace std;

void swapeNumber(int *a , int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp; 

}

int main() {
    int one, two;
    cout << "Enter First Number: " << endl;
    cin >> one;
    cout <<"Enter Second Number: " << endl;
    cin >> two;

    cout << "Before Swape"<< endl;
    cout << "First Value: " << one << endl;
    cout << "Second Value: " << two << endl;

    swapeNumber(&one , &two);

    cout<< "After Swape"<< endl;
    cout<< "First Value: "<<one<<endl;
    cout<< "Second Value: "<<two;
    return 0;
}