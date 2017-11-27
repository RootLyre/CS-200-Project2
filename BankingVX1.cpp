#include <cstdlib>
#include <iostream>
#include"Banking_Client.h"
#include"Brokerage_Client.h"

using namespace std;

int menu()
{
    int choice;
    cout <<"Main Menu\n"
         <<"=========\n"
         <<"1. Add Checking Client\n"
         <<"2. Add an Investment Client \n"
         <<"3. View All Checking Clients \n"
         <<"4. View All Investment Clients \n"
		 <<"5. Exit\n"
         <<"Enter your choice: ";
    cin >>choice;
    return choice;
}

int main(int argc, char *argv[])
{ 

//    cout <<b1.print()<<endl;
    
    int option;
    do
    {
        system("CLS");
        option = menu();
        switch(option)
        {
            case 1:
                	Banking_Client b1;
                	break;
            case 2:
                  	Brokerage_Client br1;
               		break;
            case 3: 
            		break;       
            case 4: 
                	break; 
            case 5: cout <<"GOODBYE\n";
            default: cout <<option<<" is not a valid option!\n";
        }
        
        system("PAUSE");
    }while (option !=5);

    return EXIT_SUCCESS;
}
