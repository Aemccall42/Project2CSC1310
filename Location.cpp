#include <iostream>
#include <string>
#include <random>
#include "Location.h"
using namespace std;

//main constructor
Location::Location() : locationName("Unknown"), roomCount(0) {}

//alt constructor for reading in from file?
Location::Location(const std::string& name) : locationName(name), roomCount(0) {}

//destructor for room pointer list to avoid mem leak
Location::~Location() 
{
    for (int i = 0; i < roomCount; ++i)
        delete rooms[i];
}

//adds room (use for reading in from file?)
void Location::addRoom(Rooms* room) 
{
    if (roomCount < 100) 
    {
        rooms[roomCount] = room;
        ++roomCount;
    } 
    else 
    {
        cout << "Location has reached the maximum number of rooms." << endl;
    }
}

//displays room list
void Location::displayRooms() const 
{
    cout << "Rooms for " << locationName << ":" << endl;
    for (int i = 0; i < roomCount; ++i) 
    {
        rooms[i]->displayDetails();
    }
}

//displays location mame
void Location::displayLocation() const 
{
    cout << "Location: " << locationName << endl;
}

//getter for location name
string Location::getLocationName() const 
{
    return locationName;
}