/*
Title: Project 2 HotelChain.cpp
Authors: Abigail McCall and Khushbu Joshi
Date: 10/24/24
Purpose: Create project that demonstrates sufficiency with linked lists
*/

#include "HotelChain.h"
#include <iostream>
#include <fstream>

using namespace std;

// Constructor initializes location count to 0
HotelChain::HotelChain() : location_Count(0) {
    for (int i = 0; i < 6; ++i) {
        locations[i] = nullptr; // Initialize all location pointers to nullptr
    }
}

// Destructor cleans up allocated memory for locations
HotelChain::~HotelChain() {
    for (int i = 0; i < location_Count; ++i) {
        delete locations[i]; // Delete each location to avoid memory leaks
    }
}

// Load room and location data from a file
void HotelChain::loadFromFile(const string& filename) {
    ifstream file(filename); // Open the file for reading
    if (!file) {
        cout << "\nError opening file: " << filename << endl;
        return; // Exit the function
    }

    string locationName;        //variable to store locatrion
    int numRooms;
    while (file >> locationName) {

         // Create a new Location with a template argument
        Location* newLocation = new Location(locationName);
        
        file >> numRooms;       //reads the number of rooms for this location

        //loop to read room numbers and add them to the location
        for (int i = 0; i < numRooms; ++i) {
            int roomNumber;                                                                 // Assuming room number is an integer
            if (!(file >> roomNumber)) {                                                    // Read room number and check for errors
                cout << "Error reading room number for " << locationName << endl;
                delete newLocation;                                                         // Clean up to avoid memory leak
                break;                                                                       // Exit loop on error
            }
            Rooms *newRoom = new Rooms(roomNumber);                                          // Create a new room with room number
            newLocation->addRoom(newRoom);                                                    // Add room to the location
        }


        addLocation(*newLocation);                                                              //adds new location to the hotel chain
    }

    file.close();                                                                               // Close the file
}

// Add location to chain

void HotelChain::addLocation(const Location& location) {
    if (location_Count < 6) {
        locations[location_Count] = new Location(location);
        ++location_Count;                                                                   //increment the count of  locations
    } else {
        cout << "Hotel chain has reached the maximum number of locations." << endl;         //error 
    }
}

// Display location list

void HotelChain::displayLocations() const {
    cout << "Hotel Chain Locations:" << endl;                                           //header for location
    for (int i = 0; i < location_Count; ++i) {
        cout << locations[i]->getLocationName() << endl;                                //prints location's name
    }
}

// Lists all available rooms in locations

void HotelChain::displayAvailableRooms() const {
    for (int i = 0; i < location_Count; ++i)
        locations[i]->displayRooms();                                                           // Display rooms for each location
    }