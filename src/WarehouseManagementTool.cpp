//
//  WarehouseManagementTool.cpp
//  CSCI222
//
//  Created by Sihui on 4/2/18.
//  Copyright © 2018 Sihui. All rights reserved.
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
