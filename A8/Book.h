#pragma once
#ifndef BOOK_H
#define BOOK_H

#include "LibraryItem.h"
#include <string>

class Book : public LibraryItem {
private:
    std::string title;

public:
    Book(const std::string& id, const std::string& title);

    std::string getTitle() const; // Returns the book's title.
};

#endif // BOOK_H
