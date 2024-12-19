#include<iostream>
#include<string.h>
using namespace std;

class Student {
    public:
    int rollNo;
    string name;
    int marks;
    static int objectCount;

    Student() {
        objectCount++;
    }

    // setData func and remove this
    void getData(int rollNo, string name ,int  marks) {
        this -> rollNo = rollNo;
        this -> name = name;
        this -> marks = marks;
    }

    void showData() {
        cout << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

};

int Student::objectCount = 0;

int main() {
    Student s1, s2, s3;
    s1.getData(1, "Hardip", 45);
    s1.showData();

    s2.getData(2, "Renish", 75);
    s2.showData();

    s3.getData(3, "Rohan", 90);
    s3.showData();

    cout << "\n Total Object Created = " << Student::objectCount << endl;
    return 0;
}