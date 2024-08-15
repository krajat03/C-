#include <iostream>
using namespace std;
int main()
{
    int p;
    cout << "The value of p is - " << endl;
    cin >> p;
    cout << p << endl;
   
    int a = 5;
    cout << a << endl;

    char c = 'a';
    cout << c << endl;

    float f = 1.2f;
    cout << f << endl;

    double d = 1.23;
    cout << d <<endl;

    int x;
    x = sizeof(a) + sizeof(c) + sizeof(f) + sizeof(d);
    cout <<  x << endl ;

    int length;
    length = x / sizeof(a);

    cout << length << endl; 


}