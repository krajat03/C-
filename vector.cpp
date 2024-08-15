#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1;
    int element;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the elements of vector: ";
        cin >> element;
        vec1.push_back(element);
    }

    return 0;
}