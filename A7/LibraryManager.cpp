#include "LibraryManager.h"
#include <iostream>

// specify the methods / functions of class.
void LibraryManager::addLibraryItem(LibraryItem* item) {
    libraryItems.push_back(item);
}

void LibraryManager::removeLibraryItem(LibraryItem* item) {
    libraryItems.erase(
        std::remove(libraryItems.begin(), libraryItems.end(), item),
        libraryItems.end());
    delete item;
}

void LibraryManager::listLibraryItems() const {
    for (const auto& item : libraryItems) {
        std::cout << "Item ID: " << item->GetId()
            << " | Available: " << (item->isAvailable() ? "Yes" : "No")
            << std::endl;
    }
}
LibraryManager::~LibraryManager() {
    for (auto item : libraryItems) {
        delete item;
    }
}