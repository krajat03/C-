#include <iostream>
using namespace std;
int main()
{
    int array[5] = {2, 4, 6, 8, 10};
    int *p = array;
    

    cout << "The value of array[0] is: " << *p << endl;
    cout << "The value of array[1] is: " << *(p + 1) << endl;
    cout << "The value of array[2] is: " << *(p + 2) << endl;
    cout << "The value of array[3] is: " << *(p + 3) << endl;
    cout << "The value of array[4] is: " << *(p + 4) << endl;

    return 0;
}