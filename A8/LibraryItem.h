#pragma once
#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>

// Represents a generic library item.
class LibraryItem {
protected:
    std::string id;
    bool isAvailable; // True if the item is available for borrowing.

public:
    LibraryItem(const std::string& id);
    virtual ~LibraryItem() = default;

    std::string getId() const;    // Returns the item's ID.
    bool checkAvailability() const;  // Checks if the item is available.

    void borrow();  // Marks the item as borrowed.
    void returnItem(); // Marks the item as returned.
};
#endif // LIBRARYITEM_H