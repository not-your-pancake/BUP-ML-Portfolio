#include <iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    float salary;
};

int main(){
    
// 1. Define a structure Employee with members: id, name, and salary. Take input for 3
// employees and display the employee details whose salary is highest.
    Employee e1,e2,e3;
    Employee employees[] = {e1, e2, e3};
    // input of 3 employee
        for (int i = 0; i < 3; i++) {
            cout << "Enter id, name, and salary for employee " << i + 1 << ": \n ";
            cin >> employees[i].id >> employees[i].name >> employees[i].salary;
        }
    
        cout << "Id\t" << "Name\t" << "Salary: \n";
        for (int i = 0; i < 3; i++) {
            cout << employees[i].id << "\t" << employees[i].name << "\t" << employees[i].salary << "\n";
        }
        
    // find highest salary
    float high = employees[0].salary;
    for (int i=0;i<3;i++){
        if (employees[i].salary > high){
            high = employees[i].salary;
        }
    }

    cout << "Highest salary is: " << high << "\n";


    return 0;
}