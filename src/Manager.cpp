//
//  Manager.cpp
//  CSCI222
//
//  Created by Sihui on 4/2/18.
//  Copyright © 2018 Sihui. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>

using namespace std;

// Manager class
// This class stores all data on Manager

class Manager
{
public:
    Manager();
    Manager(string,string,int,string);
    
    void readData();
    void verifyData();
    
    vector<int> ManagersRcd;
    
private:
    string username;
    string password;
    string hashPassword;
    int noOfUnsuccessfulAttempts;
    string accStatus;
    
    string fileName= "ManagerData.txt";
};

Manager::Manager()
{
    // Constructor
    username = "";
    password = "";
    noOfUnsuccessfulAttempts = 0;
    accStatus = "";
}

Manager::Manager(string username, string password, int no, string accStatus)
{
    this->username=username;
    this->password = password;
    this->noOfUnsuccessfulAttempts=no;
    this->accStatus=accStatus;
}

void Manager::readData()
{
    // read file and store into vector.
}

