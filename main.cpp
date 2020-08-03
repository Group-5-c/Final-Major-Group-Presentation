#include <iostream>
#include "addroom.h"
#include <string>
using namespace std;

void addRoom();
void reserveRoom();
void modifyRoom();
void viewRoom();
void Exit();

int main()
{

int select, night;
char room, date;
double r_rate;
    
  do
    {
    cout<< "Please select a menu option: " <<endl <<endl;
    cout<< " MENU" <<endl;
    cout<< "1. Add Room \n";
    cout<< "2. Reserve a Room \n";
    cout<< "3. Modify Room \n";
    cout<< "4. View Room \n";
    cout<< "5. Exit \n" <<endl;
    cin>> select;

        switch(select)
        {
            case 1:
                addRoom();
                break;
            case 2:
                reserveRoom();
                break;
            case 3:
                modifyRoom();
                break;
            case 4:
                viewRoom();
                break;
            case 5:
                Exit();
                break;
            default:
                cout<< "Incorrect option"<<endl;
        }
    cout<< "ROOM \t\t"   <<"CAPACITY \t" <<"ROOM RATE:Peak-Season (Jan-Jul) \t" << "ROOM RATE: Non-Peak Season (Aug-Dec)" <<endl;
    cout<< "Single \t\t" <<"One (1) \t"  << "$150 \t\t\t\t\t"  <<"$120" <<endl;
    cout<< "Double \t\t" << "Two (2) \t" <<"$175 \t\t\t\t\t"   << "$150" <<endl;
    cout<< "Family \t\t" << "Four (4) \t" << "$200 \t\t\t\t\t" << "$175" <<endl <<endl;

        while (select == 1)
        {
            cout<< "Please select room type: \n 's' - single\n 'd' - double \n 'f' - family " <<endl <<endl;
            cin>> room;
            cout<< "Please enter the number of nights: \t";
            cin>> night;
            cout << "Please enter season of stay(P or NP): \t ";
            cin >>date;

            
            switch (room)
             {
                 case 's':
                {
                     if (date == 'P' || date == 'p')
                    {
                       r_rate = night*150;
                    }
                    else if (date=='N' || date=='n')
                    {
                        r_rate = night*120;
                    }
                    else
                    {
                        cout<< "Incorrect input" <<endl;
                    }
                    cout<<"You selected single room and will be spending "<<night <<" night(s)" <<" at a cost of $" <<r_rate <<endl;
                    cout<<"Thank you for selecting this room. You may continue and reserve this room" <<endl <<endl;
                    break;
                }

                case'd':
                {   
                    if (date == 'P' || date == 'p')
                    {
                       r_rate = night*175;
                    }
                    else if (date=='N' || date=='n')
                    {
                        r_rate = night*150;
                    }
                    else
                    {
                        cout<< "Incorrect input" <<endl;
                    }
                    cout<<"You selected double room and will be spending "<<night <<" night(s)" <<" at a cost of $" <<r_rate <<endl;
                    cout<< "Thank you for selecting this room. You may continue and reserve this room" <<endl <<endl;
                    break;
                }
                case 'f':
                {
                    if (date=='P' || date=='p')
                    {
                       r_rate = night*200;
                    }
                    else if (date=='N' || date=='n')
                    {
                        r_rate = night*175;
                    }
                    else
                    {
                        cout<< "Incorrect input" <<endl;
                    }
                    cout<<"You have selected family which accomdates up to four(4) persons and will be spending "<<night <<" night(s)" <<" at a cost of $" <<r_rate <<endl;
                    cout<< "Thank you for selecting this room. You may continue and reserve this room" <<endl <<endl;
                    break;
                }
                default:
                {
                    cout<< "Incorrect input, please try again" <<endl;
                }
             
             }
            
        }

    } while (select != 5);

    
    return 0;
}

void addRoom()
{
    cout<< "Please add room here \n" <<endl;
}
void reserveRoom()
{
    cout<< "Reserve room here \n" <<endl;
}
void  modifyRoom()
{
   cout<< "You can modify room here \n" <<endl; 
}
void viewRoom()
{
   cout<< "You can now view your room \n" <<endl; 
}
void Exit()
{
    cout << "Exit" <<endl;
}

