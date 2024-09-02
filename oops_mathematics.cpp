#include <iostream>
using namespace std;
class mathematics
{
public:
    float num1;
    float num2;
    void input()
    {
        cout << "num1:- ";
        cin >> num1;
        cout << endl << "num2:- ";
        cin >> num2;
    }
    void add()
    {
        cout << "num1 + num2 = " << num1 + num2 << endl;
    }
    void sub()
    {
        cout << "num - num2 = " << num1 - num2 << endl;
    }
    void multiply()
    {
        cout << "num * num2 = " << num1 * num2 << endl;
    }
    void divide()
    {
        if (num2 != 0)
        {
            cout << "num / num2 = " << num1 / num2 << endl;
        }
        else{
            cout << "num1 / num2 = " << "Infinite";
        }
    }
};
int main()
{
    mathematics math;
    math.input();
    math.add();
    math.sub();
    math.multiply();
    math.divide();

    return 0;
}