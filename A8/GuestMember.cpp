#include "GuestMember.h"
#include "LibraryItem.h"

GuestMember::GuestMember(const std::string& name, std::string& id)
    : Member(name,id, 1) {} // Borrow limit = 1 for Guests.

bool GuestMember::borrowItem(LibraryItem* item) {
    if (borrowedItems.size() >= borrowLimit || !item->checkAvailability()) {
        return false;
    }
    borrowedItems.push_back(item);
    item->borrow();
    return true;
}