#include <iostream>
using namespace std;
class Hero
{
public: // Types of acess modifires
    int Health;
    char Level;
};
int main()
{
    // Object
    Hero Rajat;

    // Acessing the members of class
    Rajat.Health = 70;
    Rajat.Level = 'A';
    cout << "Health: " << Rajat.Health << endl;
    cout << "Level: " << Rajat.Level;

    return 0;

    
}