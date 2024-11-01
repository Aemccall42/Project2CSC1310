/*
Title: Project 2 Location.cpp
Authors: Abigail McCall and Khushbu Joshi
Date: 10/24/24
Purpose: Create project that demonstrates sufficiency with linked lists
*/

#include "Location.h"

using namespace std;

// Destructor to clean up dynamically allocated room objects

Location::~Location() {
    for (int i = 0; i < roomCount; ++i) {
        delete rooms[i];                                // deletes each room to avoid leaks
    }
}

// Default constructor initializes location name to "Unknown"

Location::Location(const string name = "Unknown"){
    this->locationName = name;                      // sets the location name
    this->roomCount = 0;                            //initialize the room count to 0
}


// Adds a room to the location

void Location::addRoom(Rooms* room) {
    if (roomCount < 100) {
        rooms[roomCount] = room;                    // Add room to the array
        ++roomCount;                                // Increment the room count
    } else {
        cout << "Location has reached the maximum number of rooms." << endl;            //error
    }
}

// Displays the list of rooms at the location

void Location::displayRooms() const {
    cout << "Rooms for " << locationName << ":" << endl;
    if (roomCount == 0) {
        cout << "No rooms available." << endl;                  //if no rooms available
    } else {
        for (int i = 0; i < roomCount; ++i) {
            rooms[i]->displayDetails();                     // call displayDetails of rooms class
        }
    }
}

// Displays the name of the location

void Location::displayLocation() const {
    cout << "Location: " << locationName << endl;               //outputs location name
}

// Getter for the location name

string Location::getLocationName() const {
    return locationName;                                    // Return the location name
}