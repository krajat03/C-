#include <iostream>
using namespace std;
int main()
{
    int n, i, factorial = 1;

    cout << "factorial = ";
    cin >> n;

    for (i = n; i > 1; i--)
    {
        factorial = factorial * i;
    }
    cout << factorial << endl;
}
