#include "InMemoryBookRepository.h"

#include <iostream>

void InMemoryBookRepository::add(const Book& book) {
    std::cout << "Saving book to database...\n";
    books_.push_back(book);
}

std::vector<Book> InMemoryBookRepository::getAll() const {
    return books_;
}