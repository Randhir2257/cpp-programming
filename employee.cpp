#include <iostream>
using namespace std;

class Employee
{
    public:
    int employee_id;
    string name;
    float salary;

    void accept()
    {
        cout << "Enter Employee ID:";
        cin >> employee_id;

        cout << "Enter name:";
        cin >> name;

        cout << "Enter Salary:";
        cin >> salary;
    }
    void display()
    {
        cout << "\nEmployee Details:" << endl;
        cout << "Employee ID" << employee_id << endl ;
        cout << "Name" << name << endl;
        cout <<"Salary:" << salary << endl;
    }
};
int main()
{
    Employee e;
    e.accept();
    e.display();

    return 0;
}

