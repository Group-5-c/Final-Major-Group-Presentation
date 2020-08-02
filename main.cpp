#include <iostream>
#include "addroom.h"

using namespace std;

int main()
{

int select;
    
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
} while (select != 5);

    
    return 0;
}
