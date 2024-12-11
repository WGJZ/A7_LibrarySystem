#ifndef IMEMBER_H
#define IMEMBER_H

#include <string>

class LibraryItem; // Forward declaration.

class IMember {
public:
    virtual ~IMember() = default;

    virtual std::string getInfo() const = 0;

    virtual bool borrowItem(LibraryItem* item) = 0;
    virtual void returnItem(LibraryItem* item) = 0;
};

#endif // IMEMBER_H
