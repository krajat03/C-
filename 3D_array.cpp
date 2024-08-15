#include <iostream>
using namespace std;
int main()
{
    int array[3][2][3] = {

        {
            {1, 2, 3},
            {4, 5, 6},
        },
        {{1, 3, 5},
         {7, 9, 11}},
        {{2, 4, 6},
         {8, 10, 12}}

    };

    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << array[k][i][j] << "\t";
            }
        }
    }

    return 0;
}