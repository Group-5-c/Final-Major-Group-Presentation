#ifndef VIEWROOM_H_INCLUDED
#define VIEWROOM_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

Class ViewRooms()
{
    public: 
    ViewRooms()
    ViewRooms(int);
    ~ViewRooms();
    int get_room;
    void set_room(int);
    
    void print();
};

void ViewRooms()
{
    cout<< "ROOM No. \t" <<"ROOM TYPE \t"   <<"CAPACITY \t" <<"ROOM RATE:Peak(Jan-Jul) \t" << "ROOM RATE: Non-Peak (Aug-Dec)" <<endl;
    cout<< "100 \t\t" <<"Single \t\t" <<"One (1) \t\t"  << "$150 \t\t\t\t"  <<"$120" <<endl;
    cout<< "200 \t\t" <<"Double \t\t" << "Two (2) \t\t" <<"$175 \t\t\t\t"   << "$150" <<endl;
    cout<< "300 \t\t" <<"Family \t\t" << "Four (4) \t\t" << "$200 \t\t\t\t" << "$175" <<endl <<endl;
}

ViewRooms::ViewRooms(int room)
{
    room = room;
}

int ViewRooms:: get_room()
{
    return room;
}

void ViewRooms:: set_room (int room1)
{
    room = room1;
}
#endif // VIEWROOM_H_INCLUDED
