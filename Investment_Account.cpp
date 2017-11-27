//Investment_Account.cpp
//321 prefix for brokerage account
//must have account manager
#include<sstream>
#include<string>
#include"Investment_Account.h"
using namespace std;

Investment_Account::Investment_Account()
{
	
}

Investment_Account
::Investment_Account(string accMgr, string accNum, string accOwnerID)
:Account("321" + accNum, accOwnerID){ accountManager = accMgr;}

string Investment_Account::print() const{
     ostringstream convert; //convert double to sring strategy
     convert <<getBalance();
     
     string str = accountManager;
     str += "\t";
     str += getAccountOwnerID();
     str += "\t";
     str += getAccountNumber();
     str += "\t";
     str += convert.str();
     
     return str;
}
