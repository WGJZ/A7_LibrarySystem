#include "Member.h"
#include "LibraryItem.h"
#include <algorithm>

Member::Member(const std::string& name, std::string& id, int borrowLimit)
    : name(name), id(id), borrowLimit(borrowLimit) {
}

std::string Member::getInfo() const {
    return "Name: " + name + ", ID: " + id+ ", ";
}

void Member::returnItem(LibraryItem* item) {
    auto it = std::find(borrowedItems.begin(), borrowedItems.end(), item);
    if (it != borrowedItems.end()) {
        borrowedItems.erase(it);
        item->returnItem();
    }
}
