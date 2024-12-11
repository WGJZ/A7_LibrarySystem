#include <iostream>
#include "LibraryManager.h"
#include "Book.h"
#include "Magazine.h"
#include "FacultyMember.h"
#include "StudentMember.h"
#include "GuestMember.h"

int main() {
    // Create a LibraryManager object/instance
    LibraryManager libraryManager;

    // Create LibraryItems
    Book* book1 = new Book("1", "Effective C++");
    Magazine* magazine1 = new Magazine("2", "New York Times");

    // Add items to the library
    libraryManager.addLibraryItem(book1);
    libraryManager.addLibraryItem(magazine1);

    // Create members
    // Make some random id numbers for demonstration 
    std::string id1 = std::to_string(rand() % 10000 + 1);
    std::string id2 = std::to_string(rand() % 10000 + 1);
    std::string id3 = std::to_string(rand() % 10000 + 1);
    FacultyMember* faculty = new FacultyMember("Dr. Jones",id1);
    StudentMember* student = new StudentMember("Amy",id2);
    GuestMember* guest = new GuestMember("Catherine",id3);

    // Add members to the library system
    libraryManager.addMember(faculty);
    libraryManager.addMember(student);
    libraryManager.addMember(guest);

    // Faculty borrows a book
    if (libraryManager.borrowItem(student, book1)) {
        std::cout << student->getInfo() << " borrowed " << book1->getTitle() << "\n\n";
    }

    // Student tries to borrow the same book (should fail as it's unavailable)
    if (!libraryManager.borrowItem(faculty, book1)) {
        std::cout << faculty->getInfo() << " failed to borrow " << book1->getTitle() << " (not available)\n\n";
    }

    // Faculty returns the book
    libraryManager.returnItem(student, book1);
    std::cout << student->getInfo() << " returned " << book1->getTitle() << "\n\n";

    // Student borrows the book successfully now
    if (libraryManager.borrowItem(guest, book1)) {
        std::cout << guest->getInfo() << " borrowed " << book1->getTitle() << "\n\n";
    }

    // Clean up
    delete book1;
    delete magazine1;
    delete faculty;
    delete student;
    delete guest;

    return 0;
}
