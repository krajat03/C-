#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlt(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)   
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int n;
    int even[8] = {2, 4, 6, 8, 10, 12, 0, 1};
    int odd[5] = {1, 3, 5, 7, 9};

    printArray(even,8);
    swapAlt(even, 8);
    printArray(even, 8);
    return 0;
}