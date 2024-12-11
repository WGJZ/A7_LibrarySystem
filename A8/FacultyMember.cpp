#include "FacultyMember.h"
#include "LibraryItem.h"

FacultyMember::FacultyMember(const std::string& name, std::string& id)
    : Member(name,id, 5) {} // Borrow limit = 5.

bool FacultyMember::borrowItem(LibraryItem* item) {
    if (borrowedItems.size() >= borrowLimit || !item->checkAvailability()) {
        return false;
    }
    borrowedItems.push_back(item);
    item->borrow();
    return true;
}