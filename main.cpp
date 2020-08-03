#include <iostream>
#include "addroom.h"
#include <string>
using namespace std;

int main()
{

int select, night;
char room;
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
                cout<< "Please add room here \n" <<endl;
                break;
            case 2:
                cout<< "Reserve room here \n" <<endl;
                break;
            case 3:
                cout<< "You can modify room here \n" <<endl;
                break;
            case 4:
                cout<< "You can now view your room \n" <<endl;
                break;
            case 5:
                cout << "Exit" <<endl;
                break;
            default:
                cout<< "Incorrect option"<<endl;
                break;
        }
    
    cout<< "ROOM \t\t"   <<"CAPACITY \t" <<"ROOM RATE:Peak-Season \t" << "ROOM RATE: Non-Peak Season" <<endl;
    cout<< "Single \t\t" <<"One (1) \t"  << "$150 \t\t\t"  <<"$120" <<endl;
    cout<< "Double \t\t" << "Two (2) \t" <<"$175 \t\t\t"   << "$150" <<endl;
    cout<< "Family \t\t" << "Four (4) \t" << "$200 \t\t\t" << "$175" <<endl <<endl;


        while (select == 1)
        {
            cout<< "Please select room type: \n 's' - single\n 'd' - double \n 'f' - family " <<endl <<endl;
            cin>> room;
            cout<< "Please enter the number of nights: ";
            cin>> night;
            
            switch (room)
             {
                 case 's':
                {
                    r_rate = night*150;
                    cout<<"You selected single room and will be spending "<<night <<" night(s)" <<" at a cost of $" <<r_rate <<endl;
                    cout<< "Thank you for selecting this room. You may continue and reserve this room" <<endl <<endl;
                    break;
                }

                case'd':
                {
                    r_rate = night*175;
                    cout<<"You selected double room and will be spending "<<night <<" night(s)" <<" at a cost of $" <<r_rate <<endl;
                    cout<< "Thank you for selecting this room. You may continue and reserve this room" <<endl <<endl;
                    break;
                }
                case 'f':
                {
                    r_rate = night*200;
                    cout<<"You have selected family which accomdates up to four(4) persons and will be spending "<<night <<" night(s)" <<" at a cost of $" <<r_rate <<endl;
                    cout<< "Thank you for selecting this room. You may continue and reserve this room" <<endl <<endl;
                    break;
                }
                default:
                {
                    cout<< "Incorrect input, please try again" <<endl;
                    break;
                }
             
             }
            
        }

} while (select != 5);

    
    return 0;
}
