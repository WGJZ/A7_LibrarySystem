#pragma once
#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>
#include <ctime>

//create an abstract class for LibaryItem
class LibraryItem {
protected:
    int id;
    bool availability;     // If the item is available
    std::time_t dueToDate; // Due date for the item

public:
    LibraryItem(int id);      // Constructor
    virtual ~LibraryItem() {} // Virtual destructor

    int GetId() const;        // Returns the itemID
    bool isAvailable() const; // Checks availability

    virtual void borrowItem() = 0; // Pure virtual function for borrowing
    virtual void returnItem();     // Virtual function for returning the item
};

#endif
