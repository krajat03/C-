#include<iostream>
using namespace std;
struct student{
    int Id;
    string Name;
    float fees;
};
int main()
{
struct student first;
first .Id = 118;
first .Name = "Rajat";
first .fees = 10000;



cout << "Id - " << first .Id << endl;
cout << "Name - " << first .Name << endl;
cout << "Fees - " << first .fees << endl;

return 0;
}