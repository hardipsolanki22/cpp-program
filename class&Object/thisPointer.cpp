#include<iostream>
#include<string.h>
using namespace std;

class Epmloyee {
    int id;
    string name;
    float salary;


    public:
    void getData(int id, string name ,float salary) {
        this -> id = id;
        this -> name = name;
        this -> salary = salary;
    }

    void showData() {
        cout << "Employee id is: " << id << endl;
        cout << "Employee Name is: " << name << endl;
        cout << "Employee Salary is " << salary << endl;
    }

};


int main() {
    Epmloyee e1, e2;
    e1.getData(1, "Hardip", 45999.99);
    e2.getData(2, "Renish", 30000);
    e1.showData();
    e2.showData();


    return 0;
}