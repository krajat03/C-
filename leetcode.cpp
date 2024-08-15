#include <iostream>
using namespace std;
int main()
{
    // cin >> n;
    // int array[n];
    // for (int i = 0; i < n; i++)
    // {
    //     array[i];
    // }
    
    int sum = 0;
    int k;
    int array[4] = {1,2,0,0};
    cin >> k;
    for (int j = 0; j < 4; j++)
    {
        sum = sum *10 + array[j];
    }
    int x = sum + k;
    cout << x;

    return 0;
}