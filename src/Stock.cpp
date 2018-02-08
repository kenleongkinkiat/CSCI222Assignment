//
//  Stock.cpp
//  CSCI222
//
//  Created by Sihui on 4/2/18.
//  Copyright © 2018 Sihui. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Stock{
public:
    Stock();
    Stock(int,string,string,string,int,int,string);
    
    void readData();
    void updateFile();
    
    vector<int> stockRcd;
    
private:
    int stockID;
    string stockDesc;
    string stockCat;
    string stockSubCat;
    int amt;
    int qty;
    string date;
    
    string fileName = "stock.txt";
    
};

Stock::Stock()
{
    
}

Stock::Stock(int stockID, string stockDesc, string stockCat, string stockSubCat,
             int amt, int qty, string date)
{
    
}

void Stock::readData()
{
    // read stockdata
}

void Stock::updateFile()
{
    // update File
}
