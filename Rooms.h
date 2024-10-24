#ifndef ROOMS_H
#define ROOMS_H

//room class for use inside of location array
class Rooms
{
    private:
        bool occupied;
        int num;
    public:
    //constructor
    Rooms();
    //alt constructor to set price or occupancy from file reading
    Rooms(double roomPrice);  
    //destructor
    ~Rooms();

    //func prototypes
    bool getOccupied() const;
    double getPrice() const;
    void displayDetails() const;
};

#endif