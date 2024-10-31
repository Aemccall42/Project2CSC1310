#ifndef ROOMS_H
#define ROOMS_H

#include <iostream>
using namespace std;


class Rooms {
private:
    bool occupied; // Room occupancy status
    int num;        // Room number (can be of any type T)

public:
    // Constructors
    Rooms(); // Default constructor
    Rooms(int roomNum); // Constructor with room number
    ~Rooms(); // Destructor

    // Member function prototypes
    bool getOccupied() const; // Check if the room is occupied
    int getRoomNumber() const; // Get the room number
    void displayDetails() const; // Display room details
};
/*
int Rooms::Rooms(int roomNum);

Destructor (if needed for cleanup)

Rooms<T>::~Rooms() {
}

// Return occupancy status

bool Rooms<T>::getOccupied() const {
    return occupied; 
}

// Return room number

T Rooms<T>::getRoomNumber() const {
    return num; 
}

// Display room details

void Rooms<T>::displayDetails() const {
    cout << "Room Number" << num << " is ";
    if (occupied) {
        cout << "occupied." << endl;
    } else {
        cout << "unoccupied." << endl;
    }
}*/

#endif // ROOMS_H