#include <iostream>
using namespace std;
// We are going to use Multiple Inheritance in our program 
class A
{
protected:
    string name;
    int id;

public:
    void input()
    {
        cout << "Enter Your name: ";
        getline(cin, name);
        cout << "Enter Your Id number: ";
        cin >> id;
    }
};
class B
{
protected:
    int salary;
    int exp;

public:
    void get()
    {
        cout << "Enter Your salary: ";
        cin >> salary;
        cout << "Enter Your experience: ";
        cin >> exp;
    }
};
class C : public A, public B   // Here we inherit class C with parent class A and class B
{
public:
    void output()
    {
        cout << endl << "Name: " << name << endl;
        cout << "Id Number : " << id << endl;
        cout << "Salary : " << salary << endl;
        cout << "Experience : " << exp << endl;
    }
};
int main()
{

    // Class C is inherited with Class A and Class B --> Multiple inheritance
    C Employee1;
    Employee1.input();
    Employee1.get();
    Employee1.output();

    return 0;
}