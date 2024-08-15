#include<iostream>
using namespace std;
struct patient
{
    int appointmentnumber;
    string Name;
    string symptoms;
    int duration;
    string Duration;

};

int main()
{
    int Appointmentnumber = 1;
    int n;
struct patient details;
// details .appointmentnumber;
details .Name;
details .symptoms;
details .duration;
details .Duration;

while (Appointmentnumber !=n ) {
cout << "Appointment number - " << Appointmentnumber<<  endl;
cout << endl << "Name - ";
    cin .ignore();

getline (cin , details .Name);
   

cout << endl << "Symptoms - ";
    cin .ignore();

getline (cin , details .symptoms);
    

cout << endl << "Duration - ";
cin >> details .duration;
cout << endl << "Days/Months/Week - ";
cin >> details .Duration;


cout << endl;
cout << "                     " << "*** APPOINTMENT DETAILS ***" << endl;
cout << "Appointment number - " << Appointmentnumber <<  endl;
cout << "Name - "<<details .Name ;
cout << endl << "Symptoms - " << details .symptoms;
cout << endl << "Duration - " << details .duration ;
cout << " " << details.Duration;
cout << endl;
cout << "----------------------------------------------------------------------------";
cout << endl;

Appointmentnumber ++;
}
return 0;
}

