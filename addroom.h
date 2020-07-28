#ifndef ADDROOM_H_INCLUDED
#define ADDROOM_H_INCLUDED
#include <iostream>
using namespace std;

class HotelRoom
{
    friend istream& operator >>(istream&, HotelRoom&);         
    private:
        int room_num;
        int room_capacity;
        int occupancy;
        double daily_rate;
    public:
        HotelRoom();
        HotelRoom(int, int, int);
        HotelRoom (const HotelRoom &myroom);
        HotelRoom& operator=(const HotelRoom &);
        ~HotelRoom();
        int getroom_num();
        int getroom_capacity();
        int get_occupany();
        double getdaily_rate();
        void setroom_num (int);
        void setroom_capacity(int);
        void set_occupancy(int);
        void setdaily_rate(double);

        void print();
};

HotelRoom::HotelRoom()
{

}

HotelRoom::~HotelRoom()
{

}

HotelRoom::HotelRoom(int r_num , int r_cap , int r_rate)
{
    room_num = r_num;
    room_capacity = r_cap;
    daily_rate = r_rate;
}

HotelRoom:: HotelRoom (const HotelRoom &myroom)
{
    room_num = myroom.room_num;
    room_capacity = myroom.room_capacity;
    occupancy = myroom.occupancy;
    daily_rate = myroom.daily_rate;
}

HotelRoom& HotelRoom:: operator=(const HotelRoom &myroom)
{
    room_num = myroom.room_num;
    room_capacity = myroom.room_capacity;
    occupancy = myroom.occupancy;
    daily_rate = myroom.daily_rate;
}

int HotelRoom:: getroom_num()
{
    return room_num;
}

int HotelRoom:: getroom_capacity()
{
    return room_capacity;
}

int HotelRoom:: get_occupany()
{
    return occupancy;
}

double HotelRoom:: getdaily_rate()
{
    return daily_rate;
}

void HotelRoom:: setroom_num (int room1)
{
    room_num = room1;
}

void HotelRoom:: setroom_capacity(int capacity1)
{
    room_capacity = capacity1;
}

void HotelRoom:: set_occupancy(int occupancy1)
{
    occupancy = occupancy1;
}

void HotelRoom:: setdaily_rate(double rate1)
{
    daily_rate = rate1;
}

void HotelRoom::print()
{

}

istream& operator >>(istream& addroom, HotelRoom& room)
{
    cout<< "Please add room ";
    addroom>> room.room_num;
    return addroom;
}

#endif // ADDROOM_H_INCLUDED
