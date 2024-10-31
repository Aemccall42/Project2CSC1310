/*
Title: Project 2 Driver
Authors: Abigail McCall and Khushbu Joshi
Date: 10/24/24
Purpose: Create project that demonstrates sufficiency with linked lists
*/

#include <iostream>
#include "HotelChain.h"     // Include the header for HotelChain
#include "Rooms.h"          // Include the header for Rooms
#include "Location.h"       // Include the header for Location


using namespace std;

void displayMenu() {
    cout << "\nWelcome to exUtopia Hotel!" << endl;
    cout << "Please choose an option: " << endl;
    cout << "1. View Locations" << endl;
    cout << "2. View Available Rooms" << endl;
    cout << "3. Exit" << endl;
}

int main() {

    HotelChain hotelChain;  // Create an instance of HotelChain
    hotelChain.loadFromFile("rooms.txt");   // Load room data from the file

    int choice;

    while (true) {
        displayMenu();    // Display the menu
      
        cout << "Enter your choice: ";
        cin >> choice;

        //input validation
    if(cin.fail()) {
        cout <<"invalid input. Please enter a number."  << endl;
        cin.clear();     //clear the error flag
        cin.ignore(10000, '\n');        //discard invalid input up to a maz numbr 

    }else{

        switch (choice) {
            case 1:
                cout << "\nAvailable Locations: " << endl;
                hotelChain.displayLocations();  // Display locations
                break;

            case 2: 
                cout << "\nAvailable Rooms: " << endl;
                hotelChain.displayAvailableRooms(); // Display available rooms
                break;
            
            case 3:
                cout << "Thank you for choosing exUtopia. Goodbye!!!" << endl;
                return 0; // Exit the program
            
            default: 
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }

    }
}
