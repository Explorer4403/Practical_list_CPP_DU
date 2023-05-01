 
#include <iostream>
using namespace std;

struct Employee {
    int emp_Number;
    string name;
    double salary;
};

int main() {
    Employee emp;
    cout << "Enter employee number: ";
    cin >> emp.emp_Number;
    cout << "Enter employee name: ";
    cin >> emp.name;
    cout << "Enter employee salary: ";
    cin >> emp.salary;
    cout << "Employee Number: " << emp.emp_Number << endl;
    cout << "Employee Name: " << emp.name << endl;
    cout << "Employee Salary: $" << emp.salary << endl;

    return 0;
} 
