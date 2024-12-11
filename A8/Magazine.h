#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "LibraryItem.h"
#include <string>

class Magazine : public LibraryItem {
private:
    std::string issue;

public:
    Magazine(const std::string& id, const std::string& issue);

    std::string getIssue() const; // Returns the magazine's issue number.
};

#endif // MAGAZINE_H
