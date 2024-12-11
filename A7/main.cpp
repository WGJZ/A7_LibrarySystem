#include "LibraryManager.h"
#include "Book.h"
#include "Magazine.h"
#include <iostream>

int main() {
    LibraryManager manager;

    // add 2 items to the library, 1 book, 1 magazine.
    Book* book = new Book(1, "Effective C++");
    Magazine* magazine = new Magazine(2, "New York Times");

    manager.addLibraryItem(book);
    manager.addLibraryItem(magazine);

    // List items
    std::cout << "Library Items:" << std::endl;
    manager.listLibraryItems();

    // Borrow the book
    std::cout << "\nBorrow the book..." << std::endl;
    book->borrowItem();

    // List items after borrowing
    manager.listLibraryItems();

    // Return the book
    std::cout << "\nReturn the book..." << std::endl;
    book->returnItem();

    // List items after returning
    manager.listLibraryItems();

    return 0;
}
