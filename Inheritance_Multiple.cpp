#include <iostream>
using namespace std;
class Enter
{
public:
    float a, b;
    virtual void input()
    {

        cout << "Enter two values: ";
        cin >> a >> b;
    }
};
class Add : public virtual Enter
{
public:
    void sum()
    {
        cout << "Sum is: " << a + b << endl;
    }
};
class Sub : public Add
{
public:
    void sub()
    {
        cout << "Substraction is: " << a - b << endl;
    }
};
class Mul : public Sub
{
public:
    void multiply()
    {
        cout << "Multiplication is: " << a * b << endl;
    }
};
class Division : public Mul
{
public:
    void division()
    {
        cout << "Division is: " << a / b << endl;
    }
};
int main()
{
    Division obj;
    obj.input();
    obj.sum();
    obj.sub();
    obj.multiply();
    obj.division();
    return 0;
}   