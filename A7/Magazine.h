#pragma once
#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "LibraryItem.h"
#include <string>

// inherit from class LibaryItem.
class Magazine : public LibraryItem {
private:
    std::string issue;

public:
    Magazine(int id, const std::string& issue); 
    // Constructor
    std::string getIssue() const;              
    // Returns the issue name

    void borrowItem() override;                
    // Implements borrow method for magazines
};
#endif