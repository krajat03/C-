#include<iostream>
using namespace std;
int main()
{
int myNum[5] = {10,20,30,40,50};
for (int i = 0; i < sizeof(myNum)/sizeof(int); i++)
{
    cout << myNum[i] << "\n";
}
cout << "size of = " << sizeof(myNum);
return 0;
}