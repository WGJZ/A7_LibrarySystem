#pragma once
#ifndef LIBRARYMANAGER_H
#define LIBRARYMANAGER_H

#include "LibraryItem.h"
#include <vector>

class LibraryManager {
private:
    std::vector<LibraryItem*> libraryItems; // Holds all library items

public:
    void addLibraryItem(LibraryItem* item);   // Adds an item to the library
    void removeLibraryItem(LibraryItem* item); // Removes an item from the library
    void listLibraryItems() const;           // Lists all library items
    ~LibraryManager();                       // Destructor to clean up memory
};

#endif
