#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = ans + (bit * pow(10, i)); // Corrected line
        n >> 1; // Use shift assignment operator for cleaner code
        i++;
    }
    cout << "Answer = " << ans<< endl;
}