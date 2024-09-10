#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 1, 5, 3};
    int filter = 0;
    for (int i = 0; i < 5; i++)
    {
        filter = filter ^ arr[i];
    }
    cout << "Filtered element is:- " << filter;
    return 0;
}