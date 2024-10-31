#include "Location.h"

using namespace std;

// Destructor to clean up dynamically allocated room objects


Location::~Location() {
    for (int i = 0; i < roomCount; ++i) {
        delete rooms[i]; // Assuming each room was allocated with new
    }
}

// Default constructor initializes location name to "Unknown"

Location::Location(const string name = "Unknown"){
    this->locationName = name;
    this->roomCount = 0;
}

// Adds a room to the location

void Location::addRoom(Rooms* room) {
    if (roomCount < 100) {
        rooms[roomCount] = room; // Add room to the array
        ++roomCount; // Increment the room count
    } else {
        cout << "Location has reached the maximum number of rooms." << endl;
    }
}

// Displays the list of rooms at the location

void Location::displayRooms() const {
    cout << "Rooms for " << locationName << ":" << endl;
    if (roomCount == 0) {
        cout << "No rooms available." << endl;
    } else {
        for (int i = 0; i < roomCount; ++i) {
            rooms[i]->displayDetails(); // Assuming displayDetails is a method in Rooms
        }
    }
}

// Displays the name of the location

void Location::displayLocation() const {
    cout << "Location: " << locationName << endl;
}

// Getter for the location name

string Location::getLocationName() const {
    return locationName; // Return the location name
}

// Overloaded output operator for Location

/*Location operator<<(ostream& os, const Location& loc) {
    os << "Location: " << loc.locationName;
    return os;
}*/