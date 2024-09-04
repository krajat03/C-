#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int n;
    cout << "Size of array:- ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }        
    }
    cout << endl << "Max = " << max;
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << endl << "Min = " << min;
    
return 0;
}