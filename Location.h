#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
#include "Rooms.h"
using namespace std;


class Location {
    private:
        string locationName; // Name of the location
        Rooms *rooms[100]; // Array of pointers to Room objects (max 100 rooms)
        int roomCount; // Current number of rooms

    public:
        Location(const string); // Default constructor
        ~Location(); // Destructor

        void addRoom(Rooms* room); // Add a room to the location
        void displayRooms() const; // Display all rooms at the location
        void displayLocation() const; // Display the location name
        string getLocationName() const; // Get the name of the location

        // Overloaded output operator for Location
        friend ostream& operator<<(ostream& os, const Location &loc) {
            os << "Location: " << loc.locationName;
            return os;
    }
};





#endif // LOCATION_H