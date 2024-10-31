#ifndef DATAITEM_H
#define DATAITEM_H

#include <iostream>
#include <string>

using namespace std;

class DataItem {
private:
    string title;         // Title of the item
    string description;   // Description of the item
    int priority;         // Priority level, e.g., 1 (low), 2 (medium), 3 (high)

public:
    // Constructor
    DataItem(const string& title, const string& description, int priority)
        : title(title), description(description), priority(priority) {}

    // Operator overloads
    friend ostream& operator<<(ostream& os, const DataItem& item) {
        os << "Title: " << item.title 
           << ", Description: " << item.description 
           << ", Priority: " << item.priority;
        return os;
    }

    bool operator<(const DataItem& other) const {
        return priority < other.priority;
    }

    bool operator>(const DataItem& other) const {
        return priority > other.priority;
    }

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