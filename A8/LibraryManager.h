#pragma once
#ifndef LIBRARYMANAGER_H
#define LIBRARYMANAGER_H

#include "LibraryItem.h"
#include "IMember.h"
#include <vector>

class LibraryManager {
private:
    std::vector<LibraryItem*> libraryItems;
    std::vector<IMember*> members;

public:
    void addLibraryItem(LibraryItem* item);
    void addMember(IMember* member);

    bool borrowItem(IMember* member, LibraryItem* item);
    void returnItem(IMember* member, LibraryItem* item);
};

#endif // LIBRARYMANAGER_H