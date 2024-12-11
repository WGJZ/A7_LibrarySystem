#pragma once
#ifndef STUDENTMEMBER_H
#define STUDENTMEMBER_H

#include "Member.h"

class StudentMember : public Member {
public:
    StudentMember(const std::string& name, std::string& id);
    bool borrowItem(LibraryItem* item) override;
};

#endif // STUDETMEMBER_H