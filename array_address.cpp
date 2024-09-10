#include <iostream>
using namespace std;
int main()
{
    int arr[2][2];
    cout << "Enter the elements of array:- " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Adress of Elements are:- " << endl;
    cout << "Row measure: " << endl; 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " = " << &arr[i][j] << ", ";
        }
        cout << endl;
    }
    cout << "Column measure: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[j][i] << " = " << &arr[j][i] << ", ";
        }
        cout << endl;
    }

    return 0;
}