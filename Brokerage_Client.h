//Brokerage_Client.h
#include"Client.h"
#include"Investment_Account.h"
using namespace std;
#ifndef BROKERAGE_CLIENT_H
#define BROKERAGE_CLIENT_H
class Brokerage_Client: public Client{
      public:
         Brokerage_Client();
         virtual string print() const;
      private:
        int numberOfAccounts; //no more than 2
        
        Investment_Account inv[2];
};
#endif
