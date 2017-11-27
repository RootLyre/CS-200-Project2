//Brokerage_Client.cpp
#include<iostream>
#include<string>
#include "Brokerage_Client.h"
using namespace std;

Brokerage_Client::Brokerage_Client(){
      int invCount; 
      string account, ownerID, first, last;
      double initialBalance;                        
      do
      {
          cout <<"Enter the number of Investment account for this new client: ";
          cin >> invCount;
      }while(invCount <0 || invCount > 2);
      
      numberOfAccounts = invCount;    
      cout <<"Enter the 5 digits/letters ownerID (applies to all accounts!): ";
      cin >> ownerID;
      cout <<"Enter the owner's First Name: ";
      cin >>first;
      cout <<"Enter the owner's Last Name: ";
      cin >>last;
      setFirstName(first);
      setLastName(last);
      setClientID(ownerID);   
      
      for (int i = 0; i < invCount; i++)
      {
          cout <<"Enter a new 4 digit account number: ";
          cin >>account;
          inv[i].setInfo("123" + account, getClientID());
          cout <<"Enter an initial balance for this account: $";
          cin >>initialBalance;
          inv[i].updateBalance(initialBalance);
      }
      
}
string Brokerage_Client::print()const{
       string str, strIN;
       int i;
       str = getFullName();
       str += "\n";
       str += "ID\tAccount\tAmount\n";
       for (i = 0; i < numberOfAccounts; i++)
             strIN += inv[i].print() + "\n";
       
       str += strIN;
       
       return str;
}
