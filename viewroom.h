#ifndef VIEWROOM_H_INCLUDED
#define VIEWROOM_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

void ViewRooms();

int main()
{
    ViewRooms();

  Return 0;
}

void ViewRooms()
{
    cout<< "ROOM No. \t" <<"ROOM TYPE \t"   <<"CAPACITY \t" <<"ROOM RATE:Peak(Jan-Jul) \t" << "ROOM RATE: Non-Peak (Aug-Dec)" <<endl;
    cout<< "100 \t\t" <<"Single \t\t" <<"One (1) \t\t"  << "$150 \t\t\t\t"  <<"$120" <<endl;
    cout<< "200 \t\t" <<"Double \t\t" << "Two (2) \t\t" <<"$175 \t\t\t\t"   << "$150" <<endl;
    cout<< "300 \t\t" <<"Family \t\t" << "Four (4) \t\t" << "$200 \t\t\t\t" << "$175" <<endl <<endl;
}
#endif // VIEWROOM_H_INCLUDED
