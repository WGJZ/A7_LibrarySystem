#ifndef MEMBER_H
#define MEMBER_H

#include "IMember.h"
#include <vector>
#include <string>

class LibraryItem;
class Member : public IMember {
protected:
    std::string name;
    std::string id;
    int borrowLimit;
    std::vector<LibraryItem*> borrowedItems;

public:
    Member(const std::string& name, std::string& id, int borrowLimit);
    virtual ~Member() = default;

    std::string getInfo() const override;

    void returnItem(LibraryItem* item) override;
};

#endif // MEMBER_H
