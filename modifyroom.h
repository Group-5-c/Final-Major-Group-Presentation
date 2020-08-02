#include<iostream>
using namespace std;

class Hotelroom;
{
    private:
    int room_num;
    int room_capacity;
    int occupancy;
    int status;
    int rate;
    
    public:
    Hotelroom();
    int getroom_num();
    int getroom_capacity(); 
    int get_occupancy();
    int get_status();
    int get_rate();
    double getdaily_rate();
    void setroom_num (int);
    void setroom_capacity(int);
    void set_occupancy(int);
};
