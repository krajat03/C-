#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 1, 3, 5};
    cout << "Original arr: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    sort(arr, arr + 5);

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ", ";
    }
    

    return 0;
}