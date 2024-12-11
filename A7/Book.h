#pragma once
#ifndef BOOK_H
#define BOOK_H

#include "LibraryItem.h"
#include <string>

// inherit from abstract class LibaryItem.
class Book : public LibraryItem {
private:
    std::string title;

public:
    Book(int id, const std::string& title); // Constructor
    std::string getTitle() const;          // Returns the title

    void borrowItem() override;            // Implements borrow logic for books
};

#endif