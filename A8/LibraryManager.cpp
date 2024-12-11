#include "LibraryManager.h"
#include "LibraryItem.h"

void LibraryManager::addLibraryItem(LibraryItem* item) {
    libraryItems.push_back(item);
}

void LibraryManager::addMember(IMember* member) {
    members.push_back(member);
}

bool LibraryManager::borrowItem(IMember* member, LibraryItem* item) {
    if (item->checkAvailability()) {
        if (member->borrowItem(item)) {
            // Successfully borrowed.
            item->borrow();
            return true;
        }
    }
    return false;
}

void LibraryManager::returnItem(IMember* member, LibraryItem* item) {
    item->returnItem();
}
