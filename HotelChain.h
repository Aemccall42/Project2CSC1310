#ifndef HotelChain_H
#define HotelChain_H

#include "Rooms.h"
#include "Location.h"
//hotelchain list contains each hotel, at most 6
class HotelChain
{
private:
    Location* locations[6];  // Array of pointers to location object
    int location_Count ;    // number of locations

public:
    HotelChain();       //constructor
    ~HotelChain();      //destructor

    void loadFromFile(const string& filename);
    void displayLocations() const;
    void displayAvailableRooms() const;
    void add_Rooms(const Rooms& rooms);
    void addLocation(const Location& location);
};


#endif      //HotelChain_H