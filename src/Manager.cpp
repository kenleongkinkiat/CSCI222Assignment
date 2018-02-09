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
    // read stockdata from .txt into stockRcds
    ifstream infile(fileName);
    
    if(!infile)
    {
        cout << fileName << " error opening" << endl << endl;
    }
    
    string line;
    int i = 0;
    
    if(infile.is_open())
    {
      while(infile.good())
      {
          getline(infile,line);
          Manager m = splitString(line);

          ManagersRcd.push_back(m);
          i++;
      }
    }

    infile.close();

}

Manager Manager::splitString(string line)
{

    string username1,password1,unsuccessful,status;

    istringstream buf(line);
    for(string user; getline(buf,user, ',');)
    {
        // username
        username = line;

        for(string pass; getline(buf,pass, ',');)
        {
            password1 =  pass;
            for(string s; getline(buf,s, ',');)
            {
              unsuccessful =  s;
              for(string acc; getline(buf,acc, ',');)
              {
                status = acc;
              }
            }
        }

    } // end split

    return new Manager(username1,password1,unsuccessful,status);

}

void Manager::verifyManager()
{

}

