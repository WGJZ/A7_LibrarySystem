#include "Magazine.h"

Magazine::Magazine(int id, const std::string& issue) : LibraryItem(id), issue(issue) {}

std::string Magazine::getIssue() const {
    return issue;
}

void Magazine::borrowItem() {
    if (availability) {
        availability = false;

        // Set due date to 2 weeks from now
        std::time_t now = std::time(nullptr);
        dueToDate = now + (2 * 7 * 24 * 60 * 60);
    }
}