#include <iostream>
using namespace std;
class Employee
{
protected:
    int id;
    string name;
    int salary;

public:
    void input()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Id number: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }
};
class Details : public Employee
{
public:
    void show()
    {
        cout << endl << "Employee name: " << name << endl;
        cout << "Employee id number: " << id << endl;
        cout << "Employee salary: " << salary << endl;
    }
};
int main()
{
    Details E1;
    E1.input();
    E1.show();

    return 0;
}