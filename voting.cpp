#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Tell me your age - ";
    cin >> age;

    if (age > 18 || age == 18)
    {
        cout << "You are eligible for voting" << endl;
    }
    
    else
    {
        cout << " You are not eligible for voting " << endl;
    }

}