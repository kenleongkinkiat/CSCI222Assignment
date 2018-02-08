//
//  SystemInterface
//  CSCI222
//



// CSCI 222 A2
// WM_SystemInterface class
// this class handles the menu and user's options.

#include <iostream>
using namespace std;

class WM_SystemInterface {
private:
    int thresholdValue;
    
public:
    void displayMenu();
};

void WM_SystemInterface::displayMenu ()
{
    char userChoice;
    
    //display menu
    cout << "Welcome to bla bla bla\n";
    cout << endl;
    
    cout << "a) Add new stock" << endl
         << "b) Remove stock " << endl
         << "c) Edit stock item" << endl
         << "d) Search stock item " << endl
         << "e) Daily stock summary report " << endl
         << "f) Weekly stock summary report" << endl
         << "g) Monthly stock summary report" << endl
         << "h) Yearly stock summary report" << endl
         << "i) Quit" << endl;
    
    cout << "Enter your choice: ";
    cin >> userChoice;
    
    switch (userChoice)
    {
        case 'a' :
    }
    
    
}
