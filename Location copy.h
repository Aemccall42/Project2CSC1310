#ifndef LOCATION_H
#define LOCATION_H

//including rooms so that each hotel has itws own room list
#include "Rooms.h"
#include <string>
#include <iostream>
using namespace std;
class Location
{

private:
    string locationName;  // Name of the location (e.g., city)
    Rooms* rooms[100];         // Array of pointers to Room objects (max 100 rooms per location)
    int roomCount;          //number of rooms in the location

public:

    //constructor and alt constr for setting name from file
    Location(); //constructor
    Location(const string& name);
    ~Location(); //destructor

    //prototypes list
    void displayLocation() const;
    void addRoom(Rooms* room);
    void displayRooms() const;
    string getLocationName() const;
};
#endif     //Location_H