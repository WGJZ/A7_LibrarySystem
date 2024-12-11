#include "LibraryItem.h"

LibraryItem::LibraryItem(int id) : id(id), availability(true), dueToDate(0) {} 
//constructor to initialize the attributes.

int LibraryItem::GetId() const {
    return id;
}

bool LibraryItem::isAvailable() const {
    return availability;
}

void LibraryItem::returnItem() {
    availability = true;
    dueToDate = 0; // Reset the due date to 0.
}