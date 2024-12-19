#include<iostream>
using namespace  std;

class Employee {
    int id;
    string name;

    public:
    void getData();
    void showData();
};

    void Employee::getData() {
       cout << "\nEnter Id of Employee: " ;
       cin >> id;
       cout << "\nEnter Name of Employee: ";
       cin >> name;
    }

    void Employee::showData() {
        cout << "Employee Id is : " << id << endl;
        cout << "Employee Name is : " << name << endl;
    }

int main() {
    int i, n;

    cout << "Enter No. Of Employee : ";
    cin >> n;

    Employee emp[n];


    for(i = 0; i < n; i++) {
        emp[i].getData();
    }

    cout << "\n ---Employee Data ---  \n";

     for(i = 0; i < n; i++) {
        emp[i].showData();
    }

    return 0;
}