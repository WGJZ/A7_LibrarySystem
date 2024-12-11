#include "Book.h"

Book::Book(int id, const std::string& title) : LibraryItem(id), title(title) {}
//constructor to initialize the attributes of class Book.

std::string Book::getTitle() const {
    return title;
}

void Book::borrowItem() {
    if (availability) {
        availability = false;

        // Set due date to 4 weeks from now
        std::time_t now = std::time(nullptr);
        dueToDate = now + (4 * 7 * 24 * 60 * 60); // 4 weeks in seconds
    }
}
