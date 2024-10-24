#include "Rooms.h"
#include <iostream>

using namespace std;

//constructor sets occupancy to false and price to 0
Rooms::Rooms() : occupied(false), num(0.0) {}

//alt constructor for setting the price at the time of room creation
Rooms::Rooms(double roomNum) : occupied(0), num(roomNum) {}

//return occupancy
bool Rooms::getOccupied() const 
{
    return occupied;
}
//return room num
double Rooms::getPrice() const 
{
    return num;
}

//display room detail
void Rooms::displayDetails() const 
{
    cout << "Room #" <<  " is ";
    if (occupied == true)
    {
        cout << "occupied." << endl;
    }
    else
        cout << "unoccupied." << endl;
}