#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        cout << i << endl;
        sum+=i;
        i++;
    }
    cout << sum;
}