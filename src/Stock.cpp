//
//  Stock.cpp
//  CSCI222
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
          stockRcd.push_back(line);
          i++;
      }
    }

    infile.close();

 
}

void Stock::updateFile()
{
    // update File to .txt

    string STRING;
    ifstream infile;
    infile.open ("Stock.txt");
        while(!infile.eof) // To get you all the lines.
        {
            getline(infile,STRING); // Saves the line in STRING.
            
        }
    infile.close();

}
