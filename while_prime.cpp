#include<iostream>
using namespace std;
int main(){
    int i=2,n;

    cin >> n;
    while (i<n)
    {
        if (n%i==0)
        {
            cout << "It is not prime for : " << i<< endl;

        }
        else
        {
            cout << "It is prime for : " << i << endl;
        }
        i++;
    }
    
}