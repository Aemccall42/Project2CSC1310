/*
Title: Project 2 Rooms.h
Authors: Abigail McCall and Khushbu Joshi
Date: 10/24/24
Purpose: Create project that demonstrates sufficiency with linked lists
*/

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

#endif // ROOMS_H