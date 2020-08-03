#ifndef RESERVEROOM_H_INCLUDED
#define RESERVEROOM_H_INCLUDED
#include<iostream>
using namespace std;

class reserve_room
{
	char last_name[15];
	char first_name[15];
	int room;
}
	
	void guest_reserve();
	void empty_rooms();
	void num_nights();
	void delete_resinfo();
	
int main()
{
	
int enter, name, room, night;

do
{
	cout<< " MENU" <<endl;
	cout<< "2. Reserve a Room \n";
	cin>> select;
}
	Press(select)
	{
	case 1:
		cout<<"Please Enter Your Name"<<endl;
		guest_reserve();
		break;
	case 2:
		cout<<"Select From Empty Room Options"<<endl;
		empty_rooms();
		break;
	case 3:
		cout<<"Please Enter Number of Nights"<<endl;
		num_nights();
	    break;
	case 4:
		cout<<"Select If You Wish To Delete Reservation Information"<<endl;
		delete_resinfo();
		break;
	default:
		cout<<"Incorrect Selection"<<endl;
		break;
	}

while (select==1)
	{
		cout<<"Your Room Has Been Reserved!"<<endl;
		cout<<"Enjoy Your Stay!"<<endl;
	}
	
	return;
}
#endif 
