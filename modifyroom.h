#include 
using namespace std

class HotelRoom
{         
    private:
        int room_num;
        int room_capacity;
        int occupancy;
       
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
        
        void print();
};
