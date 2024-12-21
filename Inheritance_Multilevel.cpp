#include <iostream>
using namespace std;
// We are going to use Multi-level Inheritance in our program
class A
{
public:
    float a, b;
    void input()
    {
        cout << "Enter two values: ";
        cin >> a >> b;
    }
};
class Add : public A                // Inherit class Add with class A
{
public:
    void sum()
    {
        cout << "Sum is: " << a + b << endl;
    }
};
class Sub : public Add              // Inherit class Sub with class Add
{
public:
    void sub()
    {
        cout << "Substraction is: " << a - b << endl;
    }
};
class Mul : public Sub              // Inherit class Mul with class Sub
{
public:
    void multiply()
    {
        cout << "Multiplication is: " << a * b << endl;
    }
};
class Div : public Mul              // Inherit class Div with class Mul
{
public:
    void division()
    {
        cout << "Division is: " << a / b << endl;
    }
};
int main()
{
    Div obj;
    obj.input();
    obj.sum();
    obj.sub();
    obj.multiply();
    obj.division();
    return 0;
}