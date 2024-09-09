#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter a String - ";
    getline(cin,str);
    int size = str.size();
    int upper_count = 0;
    int lower_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            upper_count++;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            lower_count ++;
        }
    }
    cout << "Total Upper case = " << upper_count << endl;
    cout << "Total Lower case = " << lower_count;

    return 0;
}