    /*
<<<<<<< Updated upstream
    Names: Jackson Whitworth, Spencer Kirksey, Abigail McCall, Khushbu Joshi
=======
    Names: Jackson Whitworth, Khushbu Joshi, Abigail McCall, Spencer 
>>>>>>> Stashed changes
    Purpose: This program is about Hotel occupancy where user can find which locaton and hotel they want to stay 
    and if it is available
    */


#include <iostream>
#include <cstdlib>
#include <cstring>
#include "HotelChain.h"     // Include the header for hotelchain
using namespace std;

void displayMenu()
{
    cout << "\nWelcome to exUtopia Hotel!" << endl;
    cout << "Please choose an option: " << endl;
    cout << "1. View Locations" << endl ;
    cout << "2. View Available Rooms " << endl;
    cout << "3. Exit " << endl;
}

//menu setup & ui
int main() {
    HotelChain hotelChain;  // Create an instance of HotelChain

    // Load room data from a file
    hotelChain.loadFromFile("rooms.txt");  // Ensure rooms.txt follows the required format

    // Main program loop
    while (true) {
        displayMenu();  // Display the menu options

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;  // Read user's menu selection

        switch (choice) {
            case 1:
                cout << "\nAvailable Locations:\n";
                hotelChain.displayLocations();  // Display all locations in the hotel chain
                break;

            case 2:
                cout << "\nAvailable Rooms:\n";
                hotelChain.displayAvailableRooms();  // Display all available (unoccupied) rooms across locations
                break;

            case 3:
                cout << "\nThank you for choosing exUtopia. Goodbye!" << endl;
                return 0;  // Exit the program

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;  // End of the program
}
