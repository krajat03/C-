#include<iostream>
using namespace std;
int main()
{
string array[2][4]= {
    {"A","B","C","D"},
    {"E","F","G","H"}
};

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cout << array[i][j] << "\t";
    }
    
}

return 0;
}

