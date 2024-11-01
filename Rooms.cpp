/*
Title: Project 2 Rooms.cpp
Authors: Abigail McCall and Khushbu Joshi
Date: 10/24/24
Purpose: Create project that demonstrates sufficiency with linked lists
*/

#include "Rooms.h"
#include <iostream>

using namespace std;

// Constructor initializes occupancy to false and number to default value

Rooms::Rooms(int num){
    this->occupied = false;             //setting room to unoccupied by default
    this->num = num;                    //assign provided room number
}

//destructor 

Rooms::~Rooms(){

};

// check for room occupancy

bool Rooms::getOccupied() const {
    return occupied;                //returns the occupancy status of room
}

// Get room number

int Rooms::getRoomNumber() const {
    return num;                     //returns the room number 
}

// Display room details

void Rooms::displayDetails() const {
    cout << "Room " << num << " is " << (occupied ? "occupied." : "unoccupied.") << endl;           //prints occupied or unoccupied
}