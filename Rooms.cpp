#include "Rooms.h"
#include <iostream>

using namespace std;

// Constructor initializes occupancy to false and number to default value


Rooms::Rooms(int num){
    this->occupied = false;
    this->num = num;
}



// Constructor for setting the room number


//Rooms::Rooms(int roomNum) : occupied(false), num(roomNum) {}

// Return occupancy status


bool Rooms::getOccupied() const {
    return occupied;
}

// Return room number


int Rooms::getRoomNumber() const {
    return num;
}

// Display room details


void Rooms::displayDetails() const {
    cout << "Room " << num << " is " << (occupied ? "occupied." : "unoccupied.") << endl;
}