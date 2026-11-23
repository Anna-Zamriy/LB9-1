#include "Book.h"

#include <iostream>
#include <stdexcept>
#include <utility>

Book::Book(std::string title, std::string author)
    : title_(std::move(title)), author_(std::move(author)) {
    if (title_.empty()) {
        throw std::invalid_argument("Book title must not be empty");
    }
    if (author_.empty()) {
        throw std::invalid_argument("Book author must not be empty");
    }
}

const std::string& Book::getTitle() const noexcept {
    return title_;
}

const std::string& Book::getAuthor() const noexcept {
    return author_;
}

void Book::display() const {
    std::cout << "Title: " << title_
        << ", Author: " << author_ << '\n';
}