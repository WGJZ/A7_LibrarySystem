#pragma once
#ifndef GUESTMEMBER_H
#define GUESTMEMBER_H

#include "Member.h"

class GuestMember : public Member {
public:
    GuestMember(const std::string& name, std::string& id);
    bool borrowItem(LibraryItem* item) override;
};

#endif // GUESTMEMBER_H