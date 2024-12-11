#include "LibraryItem.h"

LibraryItem::LibraryItem(const std::string& id) : id(id), isAvailable(true) {}

std::string LibraryItem::getId() const {
    return id;
}

bool LibraryItem::checkAvailability() const {
    return isAvailable;
}

void LibraryItem::borrow() {
    isAvailable = false;
}

void LibraryItem::returnItem() {
    isAvailable = true;
}
