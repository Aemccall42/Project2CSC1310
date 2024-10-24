#include "HotelChain.h"         //Include the header file 
#include <iostream>
#include <fstream>             // for file input/output operations

using namespace std;

//updated constructor
HotelChain::HotelChain() : location_Count(0){}

//destructor for the HotelChain class dynamically allocated memory cleans up
HotelChain::~HotelChain()
{
    //Loop through the array of room pointers and delete each room object
    for (int i = 0; i < location_Count; ++i)
    {
        delete[] locations;    //should not cause memory leak because each location will call its own destructor to destroy room arrays
    }
}

//load room and location data from a file, The filename is provided as a parameter
void HotelChain:: loadFromFile(const string& filename) {
    ifstream file(filename);    //open the file for reading
    if (!file) {
        // check if the file opened successfully
        cout << "\nError opening file: " << filename << endl;

        return;     // exits the function
    }
    string locationName;
    double roomPrice;
    while (file >> locationName) 
    {
        Location* newLocation = new Location(locationName);
        int numRooms;
        file >> numRooms;

        for (int i = 0; i < numRooms; ++i) 
        {
            file >> roomPrice;
            Rooms* newRoom = new Rooms(roomPrice);
            newLocation->addRoom(newRoom);
        }

        addLocation(*newLocation);
    }

    file.close();  // Close the file
}

//add location to chain (might be redundant?)
void HotelChain::addLocation(const Location& location) 
{
    if (location_Count < 6) 
    {
        locations[location_Count] = new Location(location);
        ++location_Count;
    } 
    else 
        cout << "Hotel chain has reached the maximum number of locations." << endl;
}

//display location list
void HotelChain::displayLocations() const 
{
    cout << "Hotel Chain Locations:" << endl;
    for (int i = 0; i < location_Count; ++i) 
    {
        cout << locations[i]->getLocationName() << endl;
    }
}
//lists all rooms in locations
void HotelChain::displayAvailableRooms() const 
{
    for (int i = 0; i < location_Count; ++i) 
    {
        locations[i]->displayRooms();
    }
}
