#include<iostream>
using namespace std;

int main()
{
    int t,i,table;
    cout << "Multiplication table of -  " ;
    cin >> t;

    for ( i = 1; i <= 10; i++)
    {
        table= t*i;
        cout << table << endl;
    }
    
}
