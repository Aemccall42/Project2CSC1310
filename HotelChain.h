/*
Title: Project 2 HotelChain.h
Authors: Abigail McCall and Khushbu Joshi
Date: 10/24/24
Purpose: Create project that demonstrates sufficiency with linked lists
*/

#ifndef HOTELCHAIN_H
#define HOTELCHAIN_H

#include "Rooms.h"
#include "Location.h"

using namespace std;
// HotelChain class contains each hotel, at most 6
class HotelChain {
private:
    Location* locations[6];                                                     // Array of pointers to Location objects
    int location_Count;                                                         // Number of locations

public:
    HotelChain();             // Constructor
    ~HotelChain();            // Destructor

    void loadFromFile(const string& filename);
    void displayLocations() const;
    void displayAvailableRooms() const;
    void addLocation(const Location& location);                                     // Corrected function name
};

#endif // HOTELCHAIN_H