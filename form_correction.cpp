#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string fullname, F_fullname, M_fullname;
    double F_Mob, M_Mob;
    int appointmentnumber = 0;
    int n;

    // cout << "Enter the number of appointments: ";
    // cin >> n;
    // cin.ignore(); // to consume the newline character left in the input buffer

    while (appointmentnumber < n)
    {
        cout << "\t DETAILS OF CANDIDATE : - " << endl;
        cout << "Fullname - ";
        getline(cin, fullname);

        cout << "\t DETAILS OF FATHER : - " << endl;
        cout << "Fullname - ";
        getline(cin, F_fullname);
        cout << "Contact Number - ";
        cin >> F_Mob;

        cout << "\t DETAILS OF MOTHER : - " << endl;
        cout << "Fullname - ";
        cin.ignore(); // to consume the newline character left in the input buffer
        getline(cin, M_fullname);
        cout << "Contact Number - ";
        cin >> M_Mob;

        appointmentnumber++;

        cout << "                     " << "* APPOINTMENT DETAILS *" << endl;
        cout << "Appointment number - " << appointmentnumber << endl;
        cout << "Student's name - " << fullname << endl;
        cout << "Father's name - " << F_fullname << "          " << "Contact no. - " << F_Mob << endl;
        cout << "Mother's name - " << M_fullname << "          " << "Contact no. - " << M_Mob << endl;
        cout << "----------------------------------------------------------------------------" << endl;
    }

return 0;
}