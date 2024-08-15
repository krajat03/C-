#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullname;
    string F_fullname;
    string M_fullname;
    int appointmentnumber = 0;
    int n;

    cout << "Enter the total number of appointments: ";
    cin >> n;
    cin.ignore();  // Clear the newline character left in the input buffer

    while (appointmentnumber < n) {
        // DETAILS OF STUDENT
        cout << "\t**DETAILS OF CANDIDATE**: - " << endl;
        cout << "Fullname: ";
        getline(cin, fullname);
        cout << endl;

        // DETAILS OF FATHER
        cout << "\t**DETAILS OF FATHER**: - " << endl;
        cout << "Fullname: ";
        getline(cin, F_fullname);
        double F_Mob;
        cout << "Contact Number: ";
        cin >> F_Mob;
        cin.ignore();  // Clear the newline character left in the input buffer
        cout << endl;

        // DETAILS OF MOTHER
        cout << "\t**DETAILS OF MOTHER**: - " << endl;
        cout << "Fullname: ";
        getline(cin, M_fullname);
        double M_Mob;
        cout << "Contact Number: ";
        cin >> M_Mob;
        cin.ignore();  // Clear the newline character left in the input buffer
        cout << endl;

        appointmentnumber++;

        // FINAL FORM
        cout << "                     " << "*** APPOINTMENT DETAILS ***" << endl;
        cout << "Appointment number: " << appointmentnumber << endl;
        cout << "Student's name: " << fullname << endl;
        cout << "Father's name: " << F_fullname << "          Contact no.: " << F_Mob << endl;
        cout << "Mother's name: " << M_fullname << "          Contact no.: " << M_Mob << endl;
        cout << "----------------------------------------------------------------------------" << endl;
    }

    return 0;
}
