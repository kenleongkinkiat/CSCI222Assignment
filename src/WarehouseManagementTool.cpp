//
//  WarehouseManagementTool.cpp
//  CSCI222
//

#include <iostream>
#include <stdio.h>
#include <String.h>

using namespace std;


int main()
{
    // login
    login();
    
}

void login()
{
    string user , pass;
    cout << "Please kindly enter you username and password.\n";
    cout << "\nUser: ";
    cin >> user;
    
    cout << "\nPassword: ";
    cin >> pass;
    
    if( verify(user,pass))
    {
        
    }
    
    
}

void verify(string user, string pass)
{
    // to verify username and password
    // access Manager database
    
    
    
    
}
