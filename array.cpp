#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Size of array is - ";
    cin >> n;
    cout << endl;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}