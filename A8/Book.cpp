#include "Book.h"

Book::Book(const std::string& id, const std::string& title)
    : LibraryItem(id), title(title) {}

std::string Book::getTitle() const {
    return title;
}
