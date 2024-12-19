#include<iostream>
using namespace std;

const int size = 5;

class Student {
    public: 
    int rollNo;
    int marks[size];

    void getData() {
        cout << "\nEnter Roll Number: ";
        cin >> rollNo;

        for(int i = 0; i < size; i++) {
            cout << "\nEnter Student Marks " << i+1 << " : ";
            cin >> marks[i];
        }
    }

    void totalMarks() {
        int total = 0;
         for(int i = 0; i < size; i++) {
            total+=marks[i];
        }
            cout << "\n Total Student Marks " << total << endl;
    }

};

int main() {
    Student s1;
    s1.getData();
    s1.totalMarks();

    return 0;

}