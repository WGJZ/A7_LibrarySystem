#include "Magazine.h"

Magazine::Magazine(const std::string& id, const std::string& issue)
    : LibraryItem(id), issue(issue) {}

std::string Magazine::getIssue() const {
    return issue;
}
