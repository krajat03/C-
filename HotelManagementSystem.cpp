#include <iostream>
#include <string>
int Roombooking()
{
    int roomNumber = 101;
    while (roomNumber <= 200)
    {
        int ID;
        string Name;
        string surname;
        string fullname;
        cout << " Tell me your name please " << endl;
        cin >> Name;
        // cout << " Tell me your surname please " << endl;
        // cin >> surname;
        cout << "Name: " << Name << endl;
        cout << " Tell me your ID number sir " << endl;
        cin >> ID;
        cout << "Your Room Number is" << roomNumber;
        roomNumber++;
    }
    return 0;
}
using namespace std;
int main()
{
    cout << "***** Namaste by Taj *****" << endl;
    // Roombooking();
    return 0;
}

