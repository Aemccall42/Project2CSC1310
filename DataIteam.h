/*
Title: Project 2 DataIteam.h
Authors: Abigail McCall and Khushbu Joshi
Date: 10/24/24
Purpose: Create project that demonstrates sufficiency with linked lists
*/

#ifndef DATAITEM_H
#define DATAITEM_H

#include <iostream>
#include <string>

using namespace std;

//class representing a data iteam with a title, description and priority level
class DataItem {
private:
    string title;         // Title of the item
    string description;   // Description of the item
    int priority;         // Priority level, e.g., 1 (low), 2 (medium), 3 (high)

public:
    // Constructor to initial a new dataiteam
    DataItem(const string& title, const string& description, int priority)
        : title(title), description(description), priority(priority) {}

    // Operator overloads
    friend ostream& operator<<(ostream& os, const DataItem& item) {
        os << "Title: " << item.title 
           << ", Description: " << item.description 
           << ", Priority: " << item.priority;
        return os;      //return the output stream
    }

    //overload '<' operator 
    bool operator<(const DataItem& other) const {
        return priority < other.priority;
    }

    // overload '>' operator
    bool operator>(const DataItem& other) const {
        return priority > other.priority;
    }

    //overload '==' operator
    bool operator==(const DataItem& other) const {
        return (title == other.title && description == other.description);
    }

    // Getters
    string getTitle() const {
        return title;
    }

    string getDescription() const {
        return description;
    }

    int getPriority() const {
        return priority;
    }
};

#endif // DATAITEM_H