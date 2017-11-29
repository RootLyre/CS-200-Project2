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
    Client* BC[100];
    Client* BR[100];
    
    int BCcount =  0;
    int BRcount = 0;
    do
    {
        system("CLS");
        option = menu();
        switch(option)
        {
            case 1:
                //	Banking_Client b1;
                {
                	Banking_Client* temp=new Banking_Client;
				    BC[BCcount] = temp;       	
				}
					BCcount++;
					
                	break;
            case 2:
                 {
                 	Brokerage_Client*  temp = new Brokerage_Client;
                 	BR[BRcount] = temp;
				 }
				 
				 	BRcount++;
               		break;
            case 3: 
            		for (int i=0; i<BCcount; i++)
            		{
						cout<<"Checking Account Information"
							<<"\n===================\n"
							<<BC[i]->print()<<endl;
					}
            		break;       
            case 4: 
            		for (int i=0; i<BRcount; i++)
            		{
						cout<<"Investment Account Information"
							<<"\n===================\n"
							<<BR[i]->print()<<endl;
					}
                	break; 
            case 5: cout <<"GOODBYE\n";
            		break;
            default: cout <<option<<" is not a valid option!\n";
        }
        
        system("PAUSE");
    }while (option !=5);

    return EXIT_SUCCESS;
}
