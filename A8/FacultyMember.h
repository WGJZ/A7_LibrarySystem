#pragma once
#ifndef FACULTYMEMBER_H
#define FACULTYMEMBER_H

#include "Member.h"

class FacultyMember : public Member {
public:
    FacultyMember(const std::string& name, std::string& id);
    bool borrowItem(LibraryItem* item) override;
};

#endif // FACULTYMEMBER_H