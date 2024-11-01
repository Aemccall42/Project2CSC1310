#include "Rooms.h"
#include <iostream>

using namespace std;

// Constructor initializes occupancy to false and number to default value

Rooms::Rooms(int num){
    this->occupied = false;
    this->num = num;
}

//destructor 

Rooms::~Rooms(){

};

// check for room occupancy

bool Rooms::getOccupied() const {
    return occupied;
}

// Get room number

int Rooms::getRoomNumber() const {
    return num;
}

// Display room details

void Rooms::displayDetails() const {
    cout << "Room " << num << " is " << (occupied ? "occupied." : "unoccupied.") << endl;
}