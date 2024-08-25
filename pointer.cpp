#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *b = &a;
    cout << "The adress of a is: " << b << endl;
    cout << "The adress of a is: " << &a << endl;
    cout << "The value at adress a is: " << *b << endl;

    // Pointer to Pointer

    int **c = &b;

    cout << "The adress of b is: " << c << endl;
    cout << "The value at c at the address b value  is: " << **c << endl;

}