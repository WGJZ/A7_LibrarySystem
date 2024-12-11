#include "StudentMember.h"
#include "LibraryItem.h"

StudentMember::StudentMember(const std::string& name, std::string& id)
    : Member(name, id, 3) {} // Borrow limit = 3 for Students.

bool StudentMember::borrowItem(LibraryItem* item) {
    if (borrowedItems.size() >= borrowLimit || !item->checkAvailability()) {
        return false;
    }
    borrowedItems.push_back(item);
    item->borrow();
    return true;
}