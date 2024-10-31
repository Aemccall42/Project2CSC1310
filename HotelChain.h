#ifndef HOTELCHAIN_H
#define HOTELCHAIN_H

#include "Rooms.h"
#include "Location.h"

// HotelChain class contains each hotel, at most 6
class HotelChain {
private:
    Location* locations[6];  // Array of pointers to Location objects
    int location_Count;       // Number of locations

public:
    HotelChain();             // Constructor
    ~HotelChain();            // Destructor

    void loadFromFile(const std::string& filename);
    void displayLocations() const;
    void displayAvailableRooms() const;
    void addLocation(const Location& location); // Corrected function name
};

#endif // HOTELCHAIN_H